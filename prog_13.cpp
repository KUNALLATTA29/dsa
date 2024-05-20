
#include <iostream>
using namespace std;
int main()
{
    int vip, tic;
    
    
    cout<<"Are you a vip(yes:1, no:0): ";
    cin>> vip;
    
    cout<<"do you have premium ticket(yes:1, no:0): ";
    cin>> tic;
    
    if(vip || tic){
        cout<<"you have access";
    }else{
        cout<<"you don't have access";
    }
    
   
    
    return 0;
}