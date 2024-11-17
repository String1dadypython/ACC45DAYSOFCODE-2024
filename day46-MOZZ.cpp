
#include<iostream>
using namespace std;

int main(){
    int t,x,y,r;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x>>y;
        cin>>r;
        int m=(r/30) + x;
        if(m%y==0){
            cout<<(m/y)<<endl;
        
        }
        else{
            cout<<((m/y)+1)<<endl;
        }
    }
}