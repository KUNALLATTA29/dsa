#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int b1,b2,b3;
	    cin>>b1>>b2>>b3;
	    
	    int m=0;
	    if(b1==0){
	        m++;
	    }
	    if(b2==0){
	        m++;
	    }
	    if(b3==0){
	        m++;
	    }
	    if(m>1){
	        cout<<"Water filling time"<<endl;
	    }else{
	        cout<<"Not now"<<endl;
	    }
	}

}
