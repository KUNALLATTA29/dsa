#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    vector<int>arr;
	    int value, eli=0;
	    
	    for(int i=0;i<n;i++){
	        cin>>value;
	        arr.push_back(value);
	        if(value>=x){
	            eli++;
	        }
	    }
	    
	    cout<<eli<<endl;
	}

}
