#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	
	cin>>t;
	for(int i=0;i<t;i++){
	    vector<int> arr(3);
	    int m= INT_MAX;
	    int n=0,h=0;
	    for(int k=0;k<3;k++){
	        cin>>arr[k];
	        if(arr[k]<=m){
	            m=arr[k];
	        }
	    }
	    for(int j=0;j<3;j++){
	        if(arr[j]==m&&h==0){
	            h+=1;
	            continue;
	        }
	        else{
	            n+=arr[j];
	        }
	    }
	    cout<<n<<endl;
	   
	    
	}

}
