#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	int s_dsa,s_toc,s_dm,d_dsa,d_toc,d_dm;
	for(int i=0;i<T;i++){
	    cin>>s_dsa>>s_toc>>s_dm;
	    cin>>d_dsa>>d_toc>>d_dm;
	    if((s_dsa+s_toc+s_dm)>(d_dsa+d_toc+d_dm)){
	        cout<<"DRAGON"<<endl;
	    }
	    else if((s_dsa+s_toc+s_dm)<(d_dsa+d_toc+d_dm)){
	        cout<<"SLOTH"<<endl;
	    }
	    else if((s_dsa+s_toc+s_dm)==(d_dsa+d_toc+d_dm)){
	        if(s_dsa>d_dsa){
	            cout<<"DRAGON"<<endl;
	        }
	        else if(s_dsa<d_dsa){
	            cout<<"SLOTH"<<endl;
	        }
	        else if(s_dsa == d_dsa){
	            if(s_toc>d_toc){
	                cout<<"DRAGON"<<endl;
	            }
	            else if(s_toc<d_toc){
	                cout<<"SLOTH"<<endl;
	            }
	            else if(s_toc == d_toc){
	                cout<<"TIE"<<endl;
	            }
	            
	        }
	        
	    }
	}
	

}
