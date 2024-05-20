
#include <iostream>
using namespace std;
int main()
{
    int amo;
    string membership;
    
    
    cout<<"enter amount: ";
    cin>> amo;
    
    cout<<"enter membership (premium or not): ";
    cin>> membership;
   
    
    if(amo>50 & membership=="premium"){
        cout<<amo - (amo * 0.10);
    }else if(amo>50){
        cout<<amo - (amo * 0.05);
    }else{
        cout<<amo;
    }
    
    
    return 0;
}