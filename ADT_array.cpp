#include <iostream>
using namespace std;


struct MyArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct MyArray *a, int tSize, int uSize)
{
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}

void show(struct MyArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        cout << a->ptr[i] << endl;
    }
}

int main()
{
    struct MyArray marks;
    createArray(&marks, 10, 2);
    marks.ptr[0] = 34;
    marks.ptr[1] = 45;
    show(&marks);
    

    return 0;
}