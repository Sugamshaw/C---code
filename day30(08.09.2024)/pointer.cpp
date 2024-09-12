#include <iostream>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    // &arr gives the address of the array
    std::cout << "Address of the array (&arr): " << (void*)&arr << std::endl;

    // *(&arr) is the same as arr, which is a pointer to the first element
    std::cout << "First element address (*(&arr)): " << (void*)*(&arr) << std::endl;

    // arr also points to the first element
    std::cout << "Address of the first element (arr): " << (void*)arr << std::endl;

    // Printing values using *(&arr)
    std::cout << "First element via *(&arr): " << *(*(&arr)) << std::endl;  // Equivalent to arr[0]

    return 0;
}
