#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,B1,B2,B3;
	cin>>x;
	for(int i=0;i<x;i++){
	    cin>>B1>>B2>>B3;
	    if(B1==0&&B2==0&&B3==0){
	        
	        
	        cout<<"water filling time"<<endl;
	    }
	    else if((B1+B2+B3)==2 || (B1+B2+B3)==3){
	        
	        cout<<"Not now"<<endl;
	    
	    }
	    else{
	        
	        cout<<"water filling time"<<endl;
	    }
	}
	

}
