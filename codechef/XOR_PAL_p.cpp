Xor Palindrome Problem Code: XOR_PALSolvedSubmit
You are given a binary string A of length N.

You can perform the following type of operation on the string A:

Choose two different indices i and j (1≤i,j≤N);
Change Ai and Aj to Ai⊕Aj. Here ⊕ represents the bitwise XOR operation.
Find the minimum number of operations required to convert the given string into a palindrome.

Input Format
First line of the input contains T, the number of test cases. Then the test cases follow.
First line of each test case contains an integer N denoting the size of the string.
Second line of each test case contains a binary string A of length N containing 0s and 1s only.
Output Format
For each test case, print the minimum number of operations required to make the string a palindrome.

Constraints
1≤T≤1000
1≤N≤2⋅105
Sum of N over all test cases does not exceeds 2⋅105.

Sample Input 1 
2
5
11011
7
0111010

Sample Output 1 
0
1



#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	short int t;
	cin>>t;
	int n;
	while(t--){int count=0;
	    cin>>n;
	    string str;
	    cin>>str;
	    for(int i=0;i<n/2;++i){
	       if(str[i]!=str[n-i-1]){
	           ++count;
	       }
	       
	    }
	cout<<((count/2)+(count%2))<<"\n";
// 	cout<<str<<"\n";
	
	}
	return 0;
}
