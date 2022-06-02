CodeCheffers are aware that after a contest, all problems are moved into the platform’s practice section. Based on user submissions during the contest, the system calculates and assigns a difficulty rating to each problem. Ideally, it is recommended that users practice problems in increasing order of difficulty.

Our Chef has some students in his coding class who are practicing problems. Given the difficulty of the problems that the students have solved in order, help the Chef identify if they are solving them in non-decreasing order of difficulty. That is, the students should not solve a problem with difficulty d1, and then later a problem with difficulty d2, where d1>d2.

Output “Yes” if the problems are attempted in non-decreasing order of difficulty rating and “No” if not.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases. The description of the test cases follows.
Each test case consists of 2 lines of input.
The first line contains a single integer N, the number of problems solved by the students
The second line contains N space-separate integers, the difficulty ratings of the problems attempted by the students in order.
Output Format
For each test case, output in a new line “Yes” if the problems are attempted in non-decreasing order of difficulty rating and “No” if not. The output should be printed without the quotes.
Each letter of the output may be printed in either lowercase or uppercase. For example, the strings yes, YeS, and YES will all be treated as equivalent.

Constraints
1≤T≤100
2≤N≤100
1≤ difficulty of each problem ≤5000

Sample Input 1 
4
3
1 2 3
3
1 1 2
5
100 200 300 400 350
5
1000 2000 5000 3000 1000

Sample Output 1 
Yes
Yes
No
No


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



int solve(){int count=0;
    int  n;
    cin>>n;
    int ar[n];
    fi(i,0,n){
        cin>>ar[i];
    }
    fi(i,0,n){
        if(ar[i]<=ar[i+1]){
        ++count;
        }
    }
    if(count<n){
        cout<<"no\n";
    }
    else cout<<"yes\n";
    
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