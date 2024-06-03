#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    int k=3;
    k--;
    int index =0;
    while(arr.size()>1){
        index = ((index+k)%arr.size());
        arr.erase(arr.begin()+index);
    }
    cout<<arr[0];
}