#include<bits/stdc++.h>
using namespace std;

int sol1(vector<int> arr){
    int k =0;
    for(auto it:arr){
        if(it>40){
            k++;
        }
    }
    return k;
}

int sol2(vector<int> arr){
    
    for(int i=0;i<arr.size();i++){
        if(arr[i]<30){
            return i;
        }
    }
    
    return -1;
}

int sol3(vector<int> arr){
    int k =0;
    for(auto it:arr){
       k+=it;
    }
    return k;
}

int main(){
    
    vector<int> arr = {20,10,40,25,33,12,55,49,90,28};
    double su = 0;
    for(auto it:arr){
        su+=it;
    }
    double ave = su/arr.size();
    
    if(ave>35){
        cout<<"there are "<<sol1(arr)<<" employees greater than 40.";
    }else if(ave<35){
        cout<<"index of employee who is younger than 30 is "<<sol2(arr);
    }else{
        cout<<sol3(arr);
    }
    
    return 0;
}