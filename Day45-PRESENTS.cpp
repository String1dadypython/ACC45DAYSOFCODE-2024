#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long t,a;
	cin>>t;
	
	while(t--){
	    cin>>a;
	    long long k,n=0;
	    long long s;
	    if(a%5==0){
	        k=a/5;
	        n=a-k;
	        cout<<n<<endl;
	    }
	    else if(a<5){
	        cout<<a<<endl;
	    }
	    else{
	        s=a-(a/5);
	        cout<<s<<endl;
	    }
	    
	}

}
