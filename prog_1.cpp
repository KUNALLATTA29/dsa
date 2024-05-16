#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4,5,6};
    int mid=(0+arr.size())/2;
    int i=0,j=arr.size()-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}