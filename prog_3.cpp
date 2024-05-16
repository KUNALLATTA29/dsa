#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4,5,6};
    reverse(arr.begin(), arr.end());
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}