/*#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	
	for(int i=0;i<t;i++){
	    int w,x,y,z;
	    cin>>w;
	    cin>>x>>y>>z;
	    if(w==x or w==y or w==z)
	    cout<<"YES"<<endl;
	    else if((w==(x+y))or(w==(x+z))or(w==(y+z))or(w==(x+y+z)))
	    cout<<"YES"<<endl;
	    else 
	    cout<<"NO"<<endl;
	    
	}
	return 0;
}
*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int w,a,b,c;
	    cin >> w >> a>>b>>c;
	    if(w==a or w==b or w==c)
	    cout << "YES" << endl;
	    else if(((a+b) == w) or ((b+c)==w) or((c+a)==w) or (w==(a+b+c)))
	    cout << "YES" << endl;
	    else
	    cout << "NO" << endl;
	}
	return 0;
}
