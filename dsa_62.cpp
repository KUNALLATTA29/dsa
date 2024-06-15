#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int k=0;
	    int value;
	    for(int i=0;i<n;i++){
	        cin>>value;
	        if(value>=1000){
	            k++;
	        }
	    }
	    cout<<k<<endl;
	    
	}

}
