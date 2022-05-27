
 //DEV JAISWAL

#include <bits/stdc++.h>
using namespace std;

//template
#define ll           long long int 
#define ull          unsigned long long int 
#define ld           long double
#define fi(i,a,n)    for (int i = a; i < (n); ++i)
#define fr(i,a,n)    for (int i = a; i > (n); --i)
#define MOD          1000000007
#define PI           3.141592653589793238462
#define endl         "\n"
#define f(n)         cout<<n<<endl;
#define IOS          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);  



int solve(){int min=0;
    ll  n;
    cin>>n;
    int cp=n-1;
    if(n==1){
        cout<<0<<endl;}
    else 
    if(n==2||n==3) 
    cout<<1<<endl;
    else {
    min=(n/5)*2;
    
    if(n%5>1)
    ++min;
    
    cout<<min<<endl;}
    return 0;
}


int main(){
	IOS
	ll t;
	cin>>t;
	while(t--){
	solve();
	}
	return 0;
}