#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long int t,n;
	cin>>t;
	
	
	while(t--){
	    cin>>n;
	    vector< long int>arr(n);
	    for(int j=0;j<n;j++){
	        cin>>arr[j];
	        
	    }
	     long int result =0;
	    for(int j=0;j<(n - 1);j++){
	        result += abs(arr[j] - arr[j + 1]) - 1;
	    }
	    cout<<result<<endl;
	    
     
	}
	return 0;

}
