#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,k,x,y;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>k>>x>>y;
	    if(y%x==0){
	        if(y/x<=k){
	            cout<<"YES"<<endl;
	        }
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

}
