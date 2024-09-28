// cook your dish here
#include <iostream>
#include<string.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    int N,Z=0;
    string s;
    for(int i=1;i<=T;i++){
        cin>>N;
        cin>>s;
        for(int j=0;j<N;j++){
            if(s[j] =='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                Z =0;
                

            }
            
            else{
                Z+=1;
                if(Z>=4){
                    break;
                }

            }
            
        }
        if(Z>=4){
            Z=0;
            cout<<"NO"<<endl;
        }
        else{
            Z=0;
            cout<<"YES"<<endl;
        }
        N=0;
        s.clear();
    }
}
    