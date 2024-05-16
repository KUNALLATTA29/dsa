#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cout<<"enter a number: ";
    cin>>a;
    
    int b;
    cout<<"enter a bit number you want to change(0-31): ";
    cin>>b;
    
    int x=1<<b;
    a=a|x;
    
    cout<<"new number is: "<<a;
    
    return 0;
}