#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> arr={
        {"kunal",13},
        {"babu",9},
        {"rani",24},
        {"viki",32},
        {"jojo",19}
    };
    int min=INT_MAX;
    string player;
    for(auto it:arr){
        if(it.second<min){
            min=it.second;
            player=it.first;
        }
    }
    
    cout<<player<<" : "<<min;
    return 0;
}