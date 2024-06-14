#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if(x>=n){
	        cout<<0<<endl;
	    }else{
	        double k=n-x;
	        int ans =ceil(k/4);
	        cout<<ans<<endl;
	    }
	    
	}

}
