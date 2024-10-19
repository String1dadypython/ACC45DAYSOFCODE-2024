#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,a,b;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>a>>b;
	    if(a<b){
	        cout<<"BIKE"<<endl;
	    }
	    else if(a==b){
	        cout<<"SAME"<<endl;
	    }
	    else{
	        cout<<"CAR"<<endl;
	    }
	}
	

}
