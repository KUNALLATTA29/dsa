
#include <iostream>
using namespace std;
int main()
{
    int age, criminal;
    
    
    cout<<"enter age: ";
    cin>> age;
    
    cout<<"are you a criminal(yes: 1, no:0): ";
    cin>> criminal;
   
    
   if(age>=18 & criminal==0){
       cout<<"you have voting right";
   }else{
       cout<<"you don't have voting right";
   }
    
    return 0;
}