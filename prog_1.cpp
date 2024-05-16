
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cout<<"enter a number: ";
    cin>>a;
    
    int count = 0;
    while(a>0){
        if(a&1){
            count+=1;
        }
        a=a>>1;
    }
    cout<<count;

    return 0;
}