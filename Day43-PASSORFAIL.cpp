#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	int n,x,p;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n>>x;
	    cin>>p;
	    int k=(3*x)-(n-x);
	    if(k>=p){
	        cout<<"PASS"<<endl;
	    }
	    else{
	        cout<<"FAIL"<<endl;
	    }
	}

}
