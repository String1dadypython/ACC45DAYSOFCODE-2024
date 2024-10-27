#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int a,b,c,d,sum;
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
	    cin>>a>>b>>c>>d;
	 
	    cout<<max(a, b)+max(c, d)<<endl;
	}

}
