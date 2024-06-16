#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n<=10){
	        cout<<"lower double"<<endl;
	    }else if(n<=15){
	        cout<<"lower single"<<endl;
	    }else if(n<=25){
	        cout<<"upper double"<<endl;
	    }else{
	        cout<<"upper single"<<endl;
	    }
	}

}
