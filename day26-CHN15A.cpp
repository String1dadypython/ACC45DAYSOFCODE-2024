#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    vector<int>arr(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        arr[i]+=k;
	    }
	    int m=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]%7==0){
	            m+=1;
	        }
	        else{
	            continue;
	        }
	    }
	    cout<<m<<endl;
	    m=0;
	    
	}

}
