
#include <iostream>
using namespace std;
int main()
{
    int w, charge;
    
    
    cout<<"enter your weight: ";
    cin>> w;
    
   
    
    if(w<=5){
        charge=60;
    }else{
        charge=60 + 10* (w-5);
    }
    
    cout<<charge;
    return 0;
}