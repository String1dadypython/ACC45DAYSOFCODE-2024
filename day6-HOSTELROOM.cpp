#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,y,n;
	    cin>>y>>x;
	    int a[y];
	    for(int j=0;j<y;j++){
	        cin>>a[j];
	    }
	    int p=x;
	    int q=x;
	    
	    for(int k=0;k<y;k++){
	        p=p+a[k];
	        q=max(p,q);
	        
	        if(p<0){
	            p=x;
	        }
	    }
	    
	    cout<<q<<endl;
	}
	

}
 