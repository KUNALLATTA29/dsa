#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=0;i<5;i++) 
    {                     
        cout<<"*";
    }
    cout<<"\n";
    for(int i=3;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }


    return 0;
}