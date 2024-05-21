#include<iostream>
using namespace std;

int main(){
    float h, w, k;
    cout<<"enter height in cm: ";
    cin>>h;
    
    cout<<"enter weight in kg: ";
    cin>>w;
    
    float c=h/100;
    k=w/(c*c);
    
    cout<<k<<endl;
    if(k<=18.5){
        cout<<"underweight";
    }else if(k<=24.9){
        cout<<"normal";
    }else{
        cout<<"overweight";
    }
    
    return 0;
    
   
   
}