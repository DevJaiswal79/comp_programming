Chef has two integers X and Y. Chef wants to perform some operations to make X and Y equal. In one operation, Chef can either:

set X:=X+1
or set Y:=Y+2
Find the minimum number of operations required to make X and Y equal.

Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space separated integers X and Y.
Output Format
For each test case, print the minimum number of operations required to make X and Y equal.

Constraints
1≤T≤104
1≤X,Y≤109

Sample Input 1 
5
3 4
5 5
7 3
5 2
7 12

Sample Output 1 
1
0
2
3
5

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



int solve(){int count =0,rem;
    ll x,y;
    cin>>x>>y;
    if(x<y){
        count=y-x;
    }
    else if(x>y){
        rem=(x-y)/2;
        if(x%2==0&&y%2==0)
        count=rem;
        else if(x%2!=0&&y%2!=0)
        count=rem;
        else 
        count=rem+2;
    }
    
    cout<<count<<endl;
    return 0;
}


int main(){
	IOS
	int t;
	cin>>t;
	while(t--){
	solve();
	}
	return 0;
}