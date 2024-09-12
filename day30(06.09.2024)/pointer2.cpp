#include <iostream>
using namespace std;
int main()
{
    char st[10] = "ABCD";
    char *p = st;
    cout << *p << endl;
    cout << *st << endl;
    for (int i = 0; st[i] != '\0'; i++)
    {
        cout << st[i] << " " << *(st) + i << *(i + st) << i[st];
    }
    return 0;
}