#include <iostream>
#include <cstring> // For strchr
using namespace std;
int main()
{
    const char *str = "Hello, World!";
    char ch = 'o';

    // Using strchr to find the first occurrence of 'o'
    char *result = strchr(str, ch);
    cout << &result << endl;

    if (result != nullptr)
    {
        std::cout << "First occurrence of '" << ch << "' found at position: "
                  << result - str << std::endl;
    }
    else
    {
        std::cout << "Character '" << ch << "' not found in the string." << std::endl;
    }

    return 0;
}
