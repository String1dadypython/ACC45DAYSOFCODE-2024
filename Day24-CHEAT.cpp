#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int cnt=0;
	    for(int i=2;i<=N;i=i+7){
	        if(i<=N){
	        cnt++;}
	        else{
	            continue;}
	    }
	            cout<<cnt<<endl;
	        
	}
	        return 0;
}

