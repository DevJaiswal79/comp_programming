#include <iostream>
using namespace std;

int main() {
	int t,a,b,m,a1,a2;
	cin>>t;
	while(t--){
	    cin>>a>>b>>m;
	    if(b>a)
	    {a1=b-a;
	    a2=m-b+a;}
	    else
	    {a1=a-b;
	    a2=m-a+b;}
	    if(a1<a2)
	    {cout<<a1<<endl;}
	    else
	    cout<<a2<<endl;
	    
	}
	return 0;
}
