#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	int n,a,b;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n>>a;
	    cin>>b;
	    int s=0;
	    for(int k=1;k<=n;k++){
	        if(k%2==0){
	            s+=a;
	        }
	        else{
	            s+=b;
	        }
	    }
	    cout<<s<<endl;
	}
	

}
