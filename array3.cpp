#include <iostream>
#include <algorithm>
using namespace std;
int finduniques(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }
    return ans;
}
void sortzeroandone(int arr[], int size)
{
    sort(arr, arr + size);
}
void sortzeroandone1(int arr[], int size)
{
    int zero = 0, one = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else
        {
            one++;
        }
    }
    fill(arr, arr + zero, 0);
    fill(arr + zero, arr + size, 1);
}
void display(int arr[], int size)
{
    cout<<"Output : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[] = {0, 0, 1, 0, 1, 0, 1};
    // cout << "Result: " << finduniques(arr, 7) << endl;
    // sortzeroandone(arr,7);
    // cout<<"Result: "<<finduniques2(arr,7);
    sortzeroandone1(arr, 7);
    display(arr, 7);
    return 0;
}