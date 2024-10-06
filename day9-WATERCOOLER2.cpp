#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,n,rem;
	cin >>t;
	for(int i=1;i<=t;i++){
	    cin>>x>>y;
	    n=y/x;
	    rem = y-(n*x);
	    if(n*x==y){
	        cout<<n-1<<endl;
	    }
	    else if(n*x<y){
	        
	        cout<<n<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	    
	    
	    
	}
	

}
