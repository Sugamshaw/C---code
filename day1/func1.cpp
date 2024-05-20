#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
void display();
int main()
{
    cout << sum(5, 10) << endl;
    display();
    return 0;
}
void display()
{
    cout << "Sum : " << sum(20, 60);
}