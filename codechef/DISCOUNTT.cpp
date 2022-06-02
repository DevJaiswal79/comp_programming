There are N items in a shop. You know that the price of the i-th item is Ai. Chef wants to buy all the N items.

There is also a discount coupon that costs X rupees and reduces the cost of every item by Y rupees. If the price of an item was initially ≤Y, it becomes free, i.e, costs 0.

Determine whether Chef should buy the discount coupon or not. Chef will buy the discount coupon if and only if the total price he pays after buying the discount coupon is strictly less than the price he pays without buying the discount coupon.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases. The description of the test cases follows.
Each test case consists of two lines of input.
The first line of the test case contains three space-separated integers — N, X, and Y.
The second line contains N space-separated integers — A1,A2,…,AN.
Output Format
For each test case, output COUPON if Chef should buy the discount coupon, and NO COUPON otherwise.
Each letter of the output may be printed in either lowercase or uppercase. For example, the strings coupon, CouPoN, and COUPON will all be treated as equivalent.

Constraints
1≤T≤1000
1≤N≤100
1≤X,Y≤105
1≤Ai≤105

Sample Input 1 
5
4 30 10
15 8 22 6
4 40 10
15 8 22 6
4 34 10
15 8 22 6
2 10 100
60 80
3 30 5
50 60 50

Sample Output 1 
COUPON
NO COUPON
NO COUPON
COUPON
NO COUPON


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