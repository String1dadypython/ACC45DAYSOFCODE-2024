#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	int N,X;
	
	int r,s;
	
	for(int j =0;j<T;j++){
	    cin >> N>>X;
	    
	    
	    if(N<=6){
	        cout<<X<<endl;
	    }
	    else if(N%6==1||N%6==2){
	        cout<<((N/6)*X)+X<<endl;
	    }
	    else{
	        s = round(N/ 6.0);
	        
	        r= s*X;
	        cout<<r<<endl;
	        r=0;
	        s=0;
	    }
	    N=0;
	    X=0;
	    
	}
	
return 0;
}
