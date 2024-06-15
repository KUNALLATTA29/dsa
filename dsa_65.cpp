#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int k=0,rem;
	    while(n>0){
	        rem=n%10;
	        k=k*10+rem;
	        n/=10;
	    }
	    cout<<k<<endl;
	}

}
