#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> arr;
	int inp;
	for(int i=0;i<n;i++){
	    cin>>inp;
	    arr.push_back(inp);
	    
	}
	int e=0,o=0;
	for(auto it:arr){
	    if(it%2==0){
	        e++;
	    }else{
	        o++;
	    }
	}
	if(e>o){
	    cout<<"READY FOR BATTLE"<<endl;
	}else{
	    cout<<"NOT READY"<<endl;
	}

}
