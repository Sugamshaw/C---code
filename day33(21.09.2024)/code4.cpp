#include <iostream>
#include <cstring> // For strchr

int main() {
    const char *str = "Hello, World!";
    char ch = 'o';
    
    // Pointer to store the last occurrence of the character
    const char *result = nullptr;
    
    // Use strchr to find the first occurrence and then loop to find the last one
    const char *temp = strchr(str, ch);
    while (temp != nullptr) {
        result = temp; // Update result to the current found position
        temp = strchr(temp + 1, ch); // Search for the next occurrence after the current one
    }
    
    if (result != nullptr) {
        std::cout << "Last occurrence of '" << ch << "' found at position: " 
                  << result - str << std::endl;
    } else {
        std::cout << "Character '" << ch << "' not found in the string." << std::endl;
    }
    
    return 0;
}
