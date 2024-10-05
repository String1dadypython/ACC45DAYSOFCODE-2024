#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
	cin>>t;
	int value=0,sum=0;
	
	int arr[4];

	for(int i=0;i<t;i++){
	    
	    for(int j=0;j<4;j++){
	        cin>>arr[j];
	        
	    }
	    for(int p=0;p<4;p++){
	        for(int k=0;k<4;k++){
	            if(k==p){
	                continue;
	                
	            }
	            sum+=arr[k];
	            
	        }
	        if(arr[p]>sum){
	            value+=1;
	            sum=0;
	            
	            
	        }
	        else{
	            sum=0;
	        }

	        
	    }
	    if(value==1){
	        cout<<"YES"<<endl;
	        value=0;
	        
	    }
	    else{
	        cout<<"NO"<<endl;
	        
	    }
	    
	}
	
}
