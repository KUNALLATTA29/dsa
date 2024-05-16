#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,2,3,6,4,5};
    int k=3;
    int n=arr.size();
    nth_element(arr.begin(),arr.begin()+n-k,arr.end());
    cout<<arr[n-k];
    return 0;
}