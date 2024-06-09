#include <iostream>
using namespace std;
int func()
{
}
int main()
{
    int arr[10];
    fill(arr,arr+5,10);
    fill(arr+5,arr+10,100);
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        cout<<i<<" "<<arr[i]<<endl;
    }
    return 0;
}