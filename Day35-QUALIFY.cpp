#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes her
	int t,A,B,X;
	cin>>t;
	for(int i=0;i<t;i++){
	   cin>>X>>A;
	   cin>>B;
	   int d= (A + 2*B);
	   if(X<=d){
	       cout<<"Qualify"<<endl;
	   }
	   else{
	       cout<<"NotQualify"<<endl;
	   }
	}

}
