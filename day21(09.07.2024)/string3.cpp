#include <iostream>
#include <cstring>
using namespace std;
// replace
void replace(char originalchar, char newchar, char arr[], int size)
{
    int i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] == originalchar)
        {
            arr[i] = newchar;
        }
        i++;
    }
}
int getLength(char string[])
{
    int i = 0;
    while (string[i] != '\0')
    {
        i++;
    }
    return i;
}
void upperCase(char string[])
{
    int n = getLength(string);
    for (int i = 0; i < n; i++)
    {
        char ch = string[i];
        if (ch >= 'a' && ch <= 'z')
        {
            string[i] = string[i] - 'a' + 'A';
        }
    }
}

void lowerCase(char string[])
{
    int n = getLength(string);
    for (int i = 0; i < n; i++)
    {
        char ch = string[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            string[i] = string[i] - 'A' + 'a';
        }
    }
}

void reverse(char string[])
{
    int s = 0, e = getLength(string) - 1;
    while (s < e)
    {
        swap(string[s++], string[e--]);
    }
}

bool checkPalindrome(char string[])
{
    int s = 0, e = getLength(string) - 1;
    while (s < e)
    {
        if (string[s++] != string[e--])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    // char arr[100];
    // cin.getline(arr, 100);
    // // int i = 0;
    // // replace(' ', '@', arr, 100);
    // // upperCase(arr);
    // // cout << arr << endl;
    // // lowerCase(arr);
    // // cout << arr << endl;

    // cout << checkPalindrome(arr) << endl;

    char arr[100];
    cin.getline(arr, 100);
    char arr2[100];
    cin.getline(arr2, 100);

    string s = strcat(arr, arr2);
    int len = strlen(arr);
    cout << s << endl;
    cout << len << endl;
}