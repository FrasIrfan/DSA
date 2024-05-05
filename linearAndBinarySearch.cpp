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

int main()
{
    int arr[] = {2, 4, 6, 8, 10,12,7,9,3,22,5};
    int array_size = sizeof(arr) / sizeof(arr[0]);
    int element = 3;

    int SearchIndex = LinearSearch(arr, array_size, element);
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