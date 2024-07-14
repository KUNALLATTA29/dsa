#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
	cin >> s;
	string tem =s;
	reverse(s.begin(),s.end());
	if(s==tem){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	
    return 0;
}