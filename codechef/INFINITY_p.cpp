You are climbing an infinity staircase, which (as its name suggests) has an infinite number of steps. You are currently standing at the 1st step, and you would like to reach the N-th step. When standing at the i-th step, you can make one of the following three moves:

Move to step i+1
Move to step i+2
Move to step i+3
However, you can't make the same move twice in a row.

For example, suppose you reach the 7th step from the 4th step using the third move. Then, from the 7th step, you can move to either the 8th or the 9th step (using the 1st or 2nd move) — but you can't move to the 10th step (because you would use the third move twice in a row). Now suppose you choose the 1st move and move to the 8th step. On your next move, you cannot move to the 9th step, but you can move to either the 10th or the 11th step.

Under these conditions, find the minimum number of moves you need to reach the N-th step.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line containing one integer, N.
Output Format
For each test case, print on a new line the minimum number of moves required to reach the N-th step.

Constraints
1≤T≤105
1≤N≤109

Sample Input 1 
5
2
3
5
1
7

Sample Output 1 
1
1
2
0
3


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