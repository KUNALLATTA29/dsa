
#include <iostream>
using namespace std;
int main()
{
    int grade;
    
    
    cout<<"enter your grade: ";
    cin>> grade;
    
   
    
    if(grade>=95){
        cout<<'A';
    }else if(grade>=85){
        cout<<'B';
    }else if(grade>=75){
        cout<<'C';
    }else if(grade>=65){
        cout<<'D';
    }else{
        cout<<'F';
    }

    return 0;
}