#include <iostream>
using namespace std;

int main()
{
    int num[5]; // Declaring an array of 5 integers
    int *p;     // Declaring a pointer to an integer

    p = num; // p points to the first element of the array num (same as p = &num[0])
    *p = 10; // The value at num[2] is now 30

    p++;
    *p = 20;     // The value at num[2] is now 30
    p = &num[2]; // p now points to the third element in the array (index 2)
    *p = 30;
    // The value at num[2] is now 30

    p = num + 3; // p now points to the fourth element in the array (index 3)
    *p = 40;     // The value at num[3] is now 40

    p = num; // p now points back to the first element of the array
    *(p + 4) = 50;
    // Printing the array to check the values
    for (int i = 0; i < 5; i++)
    {
        cout << "num[" << i << "] = " << num[i] << endl;
    }

    return 0;
}
