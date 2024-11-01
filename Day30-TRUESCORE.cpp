#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(c<a || d<b){
	        cout<<"impossible"<<endl;
	    }
	    else{
	        cout<<"possible"<<endl;
	    }
	}
	return 0;
}



