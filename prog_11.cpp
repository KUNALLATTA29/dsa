
#include <iostream>
using namespace std;
int main()
{
    int tim;
    
    
    cout<<"enter due duration(more than a week:1 or not:0): ";
    cin>> tim;
    
    if(tim==1){
        cout<<50 + (50*0.10);
    }else{
        cout<<50;
    }
    
   
    
    return 0;
}