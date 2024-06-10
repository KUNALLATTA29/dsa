
#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> arr={1,2,3,4,5,6,7};
    for(int i =0;i<arr.size();i++){
        if(arr[i]%2!=0){
            arr.erase(arr.begin()+i);
        }
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}