#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,x;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n>>x;
	    if(x==n){
	        cout<<0<<endl;
	        
	    }
	    else if( x<=(n/2)){
	        cout<<x<<endl;
	    }
	    else{
	        cout<<(n-x)<<endl;
	}

}
}