#include <iostream>
// #define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

using namespace std;

void insertAt(int arr[], int array_size, int index, int element)
{
    // Checking for Invalid index
    if (index < 0 || index > array_size)
    {
        cout << "Invalid Index" << endl;
        return;
    }

    // Checking if the array is full
    if (array_size == sizeof(arr) / sizeof(arr[0]))
    {
        cout << "Array is full" << endl;
        return;
    }

    // Shifting elements to the right from the index
    for (int i = array_size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[index] = element;
    cout << "\nInserted element at index => " << index << endl;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int array_size = sizeof(arr) / sizeof(arr[0]);

    int element = 3;
    int index = 1;

    cout << "Array before insertion: ";
    for (int i = 0; i < array_size; i++)
    {
        cout << arr[i] << " ";
    }
    insertAt(arr,array_size,index,element);
    cout << "Array after insertion: ";
    for (int i = 0; i < array_size ; i++)
{
    cout << arr[i] << " ";
}
    cout << endl;

    return 0;
}