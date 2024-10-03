#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z,a;
	cin>>t;
	for (int i=0;i<t;i++){
	    cin>>x>>y;
	   int t1=(500-(x*2))+(1000-((x+y)*4));
	   int t2=(1000-(y*4))+(500-((x+y)*2));
	    if(t1>t2){
	        cout<<t1<<endl;
	        
	    }
	    else{
	        cout<<t2<<endl;
	    }
	}

}
