You are given an integer N. Let A be an N×N grid such that Ai,j=i+N⋅(j−1) for 1≤i,j≤N. For example, if N=4 the grid looks like:



You start at the top left corner of the grid, i.e, cell (1,1). You would like to reach the bottom-right corner, cell (N,N). To do so, whenever you are at cell (i,j), you can move to either cell (i+1,j) or cell (i,j+1) provided that the corresponding cell lies within the grid (more informally, you can make one step down or one step right).

The score of a path you take to reach (N,N) is the sum of all the numbers on that path.

You are given an integer K that is either 0 or 1. Is there a path reaching (N,N) such that the parity of its score is K?

Recall that the parity of an integer is the (non-negative) remainder obtained when dividing it by 2. For example, the parity of 246 is 0 and the parity of 11 is 1. In other words, an even number has parity 0 and an odd number has parity 1.

Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space-separated integers N and K.
Output Format
For each test case, output the answer on a new line — YES if such a path exists, and NO otherwise.
Each character of the output may be printed in either uppercase or lowercase, i.e, the strings YES, yEs, and yes will all be treated as identical.

Constraints
1≤T≤105
1≤N≤109
K∈{0,1}

Sample Input 1 
4
1 0
2 0
2 1
3 1

Sample Output 1 
No
Yes
Yes
Yes

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



int solve(){
    ll n;
    int k;
    cin>>n;
    cin>>k;
    if(n%2==0){
        cout<<"yes\n";
    }
    else if(k==1){
        cout<<"yes\n";
        
    }
    else cout<<"no\n";
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