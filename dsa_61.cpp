#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    vector<int> arr;
	    int value;
	    for(int i=0;i<4;i++){
	        cin>>value;
	        arr.push_back(value);
	    }
	    sort(arr.begin(), arr.end());
	    if(arr[3]>arr[0]+arr[1]+arr[2]){
	        cout<<"yes"<<endl;
	    }else{
	        cout<<"no"<<endl;
	    }
	    
	}

}
