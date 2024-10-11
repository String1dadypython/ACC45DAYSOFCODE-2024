#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,diff;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>a>>b;
	    if(a>=(2*b)||b>=(2*a)){
	        cout<<0<<endl;
	    }
	    else if(a%2==0&&b%2==0&&a==b){
	        cout<<a/2<<endl;
	    }
	    else if(a%2!=0&&b%2!=0&&a==b){
	         cout<<(a/2)+1<<endl;
	        
	    
	        
	    }
	    else if(a>b){
	       cout<<b-(a/2)<<endl;
	    }
	    else if(b>a){
	       cout<<a-(b/2)<<endl;
	    }
	    
	}

}
