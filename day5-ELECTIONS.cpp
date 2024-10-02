#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,Xa,Xb,Xc;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>Xa>>Xb>>Xc;
	    if(Xa>50){
	        
	        cout<<"A"<<endl;
	    }
	    else if(Xb>50){
	        cout<<"B"<<endl;
	    }
	    else if(Xc>50){
	        cout<<"C"<<endl;
	    }
	    else{
	        cout<<"NOTA"<<endl;
	    }
	}
	

}
