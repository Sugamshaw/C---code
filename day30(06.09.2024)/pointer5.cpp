#include <iostream>
using namespace std;

void modifyValue(int *ptr)
{
    (*ptr) *= 2; // Multiply the value pointed to by ptr by 2
}

void modifyArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        modifyValue(&arr[i]); // Pass the address of each array element to modifyValue
    }
}

int main()
{
    int x = 5;
    int *ptr = &x; // Pointer to x

    int y = 10;
    int *ptr2 = &y;

    int **ptr_ptr = &ptr;
    int ***ptr_ptr_ptr = &ptr_ptr;
    modifyValue(*ptr_ptr);
    modifyValue(**ptr_ptr_ptr);
    modifyValue(ptr2);

    cout << "x : " << x << endl;
    cout << "y : " << y << endl;
    
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    modifyArray(arr, size); // Modify all elements of the array

    cout << "Modified array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
