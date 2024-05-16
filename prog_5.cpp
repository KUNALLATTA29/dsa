#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,2,3,6,3,5};
    cout<<*max_element(arr.begin(),arr.end())<<"\n";
    cout<<*min_element(arr.begin(), arr.end());
    
    return 0;
}