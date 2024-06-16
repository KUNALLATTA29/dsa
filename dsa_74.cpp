#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int value,max=0;
	    for(int i=0;i<3;i++){
	        cin>>value;
	        if(value>max){
	            max=value;
	        }
	    }
	    cout<<max<<endl;
	    
	}

}
