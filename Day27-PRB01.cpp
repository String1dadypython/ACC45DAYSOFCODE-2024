#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,k=0;
	cin>>t;
	for(int i=1;i<=t;i++){
	    cin>>n;
	    for(int j=1;j<=n;j++){
	        if(j>1&&j<n){
	            if(n%j==0){
	                k+=1;
	                break;
	            }
	            else{
	                continue;
	            }
	        }
	    }
	    if(k==1||n==1){
	        cout<<"NO"<<endl;
	        k=0;
	    }
	    else{
	        cout<<"YES"<<endl;
	        k=0;
	    }
	}

}
