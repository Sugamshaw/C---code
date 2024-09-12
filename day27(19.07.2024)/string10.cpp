#include <iostream>
#include <string>
using namespace std;
// bool isVowel(char c)
// {
//     return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
// }

// int aliceWins(string s,int start)
// {
//     int vowelCount = 0, pos = 0;
//     for (int i = start; i < s.length(); i++)
//     {
//         if (isVowel(s[i]))
//         {
//             if (vowelCount != 1 && vowelCount % 2 == 1)
//             {
//                 return pos;
//             }
//             vowelCount++;
//         }
//     }
//     // Alice wins if the number of vowels is odd
//     return -1;
// }
// int aliceWins(string s,int start)
// {
//     int vowelCount = 0, pos = 0;
//     for (int i = start; i < s.length(); i++)
//     {
//         if (isVowel(s[i]))
//         {
//             if (vowelCount != 1 && vowelCount % 2 == 1)
//             {
//                 return pos;
//             }
//             vowelCount++;
//         }
//     }
//     // Alice wins if the number of vowels is odd
//     return -1;
// }
// bool doesAliceWin(string s)
// {
//     int start=0,end=s.length()-1;
//     while(s<=e)
//     {
//         if(aliceWins(s,start))
//         {

//         }
//     }
//     return -1;
// }
bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    bool doesAliceWin(string s) {
        int vowelCount = 0;
        for (char c : s) {
            if (isVowel(c)) {
                vowelCount++;
            }
        }
        return ((vowelCount != 0 && vowelCount >=1));
    }
int main()
{
    string s1 = "leetcoder";
    cout << doesAliceWin(s1) << endl; // 1

    std::string s2 = "bbcd";
    cout << doesAliceWin(s2) << endl; //0 
    std::string s3 = "ifld";
    cout << doesAliceWin(s3) << endl; //1
    std::string s4 = "sloalo";       // 1
    cout << doesAliceWin(s4) << endl;


    return 0;
}
