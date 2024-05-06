#include <iostream>
#include <vector>
using namespace std;

void insertAt(vector<int> &arr, int array_size, int index, int element)
{
    // Checking for Invalid index
    if (index < 0 || index > array_size)
    {
        cout << "Invalid Index" << endl;
        return;
    }

    // Checking if the array is full
    // if (array_size == arr.size())
    // {
    //     cout << "Array is full" << endl;
    //     return;
    // }

    // Shifting elements to the right from the index
    for (int i = array_size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[index] = element;
    array_size++;
    cout << "\nInserted element at index => " << index;
}

void deleteAt(vector<int> &arr, int &array_size, int index)
{
    // Checking for Invalid index
    if (index < 0 || index >= array_size)
    {
        cout << "Invalid Index" << endl;
        return;
    }

    // Shifting elements to the left from the index
    for (int i = index; i < array_size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    array_size--;
    cout << "\nDeleted element at index => " << index << endl;
}

int main()
{
    vector<int> arr = {2, 4, 6, 8, 10};
    int array_size = arr.size();

    int element = 3;
    int index = 1;

    cout << "Array before insertion: ";
    for (int i = 0; i < array_size; i++)
    {
        cout << arr[i] << " ";
    }

    insertAt(arr, array_size, index, element);
    cout << "\nArray after insertion: ";
    for (int i = 0; i < array_size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n\nArray before deletion: ";
    for (int i = 0; i < array_size; i++)
    {
        cout << arr[i] << " ";
    }
    index = 2;
    deleteAt(arr, array_size, index);
    cout << "Array after deletion: ";
    for (int i = 0; i < array_size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
