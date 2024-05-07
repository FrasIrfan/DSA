#include <iostream>
using namespace std;

int LinearSearch(int arr[], int array_size, int element)
{
    for (int i = 0; i < array_size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int BinarySearch(int arr[], int array_size, int element)
{
    int low = 0;
    int high = array_size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    // Array for Linear Search
    int arr[] = {2, 4, 6, 8, 10, 12, 7, 9, 3, 22, 5};
    int array_size = sizeof(arr) / sizeof(arr[0]);
    int element = 22;

    // Array for Binary Search
    // int arr[] = {2, 4, 6, 8, 10, 12, 14};
    // int array_size = sizeof(arr) / sizeof(arr[0]);
    // int element = 6;

    int SearchIndex = BinarySearch(arr, array_size, element);
    if (SearchIndex == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at index => " << SearchIndex << endl;
    }

    return 0;
}