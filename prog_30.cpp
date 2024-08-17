#include<bits/stdc++.h>
using namespace std;

int sol1(vector<int> arr){
    int k=0;
    for(auto it:arr){
        if(it>5){
            k++;
        }
    }
    return k;
}

int sol2(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        if(arr[i]<2){
            return i;
        }
    }
    return -1;
}

int sol3(vector<int> arr){
    int k = 0;
    for(auto it:arr){
        k+=it;
    }
    return k;
    
}

int main(){
    
    vector<int> arr = {10,20,30,22,40,50,45,55,60,65};
    
    double sum =0;
    
    for(auto it:arr){
        sum+=it;
    }
    double ave = sum/arr.size();
    
    if(ave>3){
        cout<<sol1(arr);
    }else if(ave<3){
        cout<<sol2(arr);
    }else{
        cout<<sol3(arr);;
    }
    return 0;
}