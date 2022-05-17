#include <iostream>
using namespace std;

int main() {
    int t,n,k;
    cin>>t;
	while(t--){
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	       cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i]>k)
	        cout<<0;
	        else{
	        cout<<1;
	            k=k-arr[i];
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
