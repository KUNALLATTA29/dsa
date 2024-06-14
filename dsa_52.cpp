#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int value;
	    bool babu=false;
	    for(int i=0;i<4;i++){
	        cin>>value;
	        if(value==1){
	            babu=true;
	        }
	    }
	    if(babu){
	        cout<<"OUT"<<endl;
	    }else{
	        cout<<"IN"<<endl;
	    }
	   
	    
	}

}
