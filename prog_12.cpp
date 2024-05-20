
#include <iostream>
using namespace std;
int main()
{
    int amo, pur;
    
    
    cout<<"enter amount: ";
    cin>> amo;
    
    cout<<"enter number of purchases: ";
    cin>> pur;
    
    if(pur>5){
        cout<<amo - (amo* 0.15);
    }else{
        cout<< amo - (amo * 0.10);
    }
    
   
    
    return 0;
}