#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	
	int arr[4];
	cin>>t;
	while(t>0){
	    for(int i=0;i<4;i++){
	        cin>>arr[i];
	    }
	    if(((arr[0]+arr[2])==180) || ((arr[1]+arr[3])==180) ){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	    for(int i=0;i<4;i++){
	        arr[i]=0;
	    }
	    t--;
	    
	    
	    
	   
	}

}
