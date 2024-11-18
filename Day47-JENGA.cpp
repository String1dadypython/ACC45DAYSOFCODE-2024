#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,a,b;
	cin>>t;
    while(t--){
        cin>>a>>b;
        float k=b%a;
        if(k==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}
