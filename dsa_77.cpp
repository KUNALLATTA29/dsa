#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x==y){
	        cout<<0<<endl;
	    }else if(x>y){
	        cout<<x-y<<endl;
	    }else{
	        cout<<y-x<<endl;
	    }
	}

}
