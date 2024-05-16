#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,2,3,6,3,5};
    sort(arr.begin(),arr.end());
    
    cout<<arr[0]<<endl;
    cout<<arr[arr.size()-1];
    return 0;
}