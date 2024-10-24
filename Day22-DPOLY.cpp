#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int count=0;
	for(int i=0;i<t;i++)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int p=0;p<n;p++)
	    {
	        cin>>arr[p];
	        if(arr[p]!=0){
	            count=p;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
