#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
	cin>>n;
	vector<long long> arr;
	for(int i=0;i<n;i++){
		long long k;
		cin>>k;
		arr.push_back(k);
	}
	long long sum=0;
	for(auto it:arr){
		sum+=it;
	}
	cout<<sum;
	
    return 0;
}