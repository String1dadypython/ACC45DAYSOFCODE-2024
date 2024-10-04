#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,N,K;
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>N>>K;
	vector<int> arr(N);
	    for(int j=0;j<N;j++){
	        cin>>arr[j];
	        if(arr[j]<=K){
	            cout<<1;
	            K=K-arr[j];
	        }
	        else{
	            cout<<0;
	        }
	    }
	    cout<<endl;
	    
	}

}
