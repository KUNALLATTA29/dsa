
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cout<<"enter a number: ";
    cin>>a;
    
    int count = 0;
    int b= a;
    while(a>0){
        if(a&1){
            count+=1;
        }
        a=a>>1;
    }
    if(count==1 && b>0){
        cout<<"given number is power of 2";
    }else{
        cout<<"it's not the power of 2";
    }

    return 0;
}