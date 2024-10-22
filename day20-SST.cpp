#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,a,b;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>a>>b;
	    if(2*a>b){
	        cout<<"FIRST"<<endl;
	    }
	    else if(2*a<b){
	        cout<<"SECOND"<<endl;
	    }
	    else if(2*a==b){
	        cout<<"ANY"<<endl;
	    }
	}
	

}
