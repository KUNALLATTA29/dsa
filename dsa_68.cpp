#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,a,b;
	    cin>>x>>a>>b;
	    int tp=a+b*2;
	    if(tp>=x){
	        cout<<"qualify"<<endl;
	    }else{
	        cout<<"notQualify"<<endl;
	    }
	}

}
