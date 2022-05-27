
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



int solve(){int count=0;int c1=0;
    short int  n;
    int x,y;
    cin>>n>>x>>y;
    int ar[n];
    fi(i,0,n){
        cin>>ar[i];
    }
    fi(i,0,n){
        count+=ar[i];
        if(ar[i]<=y){
            ar[i]=0;
        }
        else 
        ar[i]=ar[i]-y;
    }
    fi(i,0,n){
        c1+=ar[i];
    }
    if((x+c1)<count) cout<<"COUPON"<<endl;
    else cout<<"NO COUPON"<<endl;
    
    
    return 0;
}


int main(){
	IOS
	short int t;
	cin>>t;
	while(t--){
	solve();
	}
	return 0;
}