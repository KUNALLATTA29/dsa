#include<bits/stdc++.h>
using namespace std;

int main(){
    

	int num;
	cin >> num; 
	int result = 1;
	while(num>0){
		result*=num;
		num--;
	}
    cout<<result;
    return 0;
}