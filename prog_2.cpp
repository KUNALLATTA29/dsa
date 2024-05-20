
#include <iostream>
using namespace std;
int main()
{
    int age;
    string subs;
    
    cout<<"enter your age: ";
    cin>> age;
    
    cout<<"enter your subscription: ";
    cin>> subs;
    
    if(age>= 18 & subs=="valid"){
        cout<<"access done";
    }else{
        cout<<"invalid inputs";
    }

    return 0;
}