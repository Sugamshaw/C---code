#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int a;
	    cin>>a;
	    int ans=0;
	    while(a!=0){
	        int rem = (a%10);
	        ans=ans*10+ rem;
	        a=a/10;
            cout<<ans<<endl;
	    }
	    cout<<ans<<endl;
	}
}
