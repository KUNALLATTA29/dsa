#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,2,3,6,3,5};
    int max=arr[0];
    int min=arr[0];
    for(auto it: arr){
        if(max<it){
            max=it;
        }
        
        if(min>it){
            min=it;
        }
    }
    cout<<max<<" "<<min;
    return 0;
}