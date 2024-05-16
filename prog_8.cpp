#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,2,3,6,4,5};
    int k=3;
    nth_element(arr.begin(),arr.begin()+k-1,arr.end());
    cout<<arr[k-1];
    return 0;
}