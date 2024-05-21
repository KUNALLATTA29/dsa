
#include <iostream>
using namespace std;
int main()
{
    char a, b;
    
    
    cout<<"1st choose one(r,p,s): ";
    cin>> a;
    
    cout<<"2nd choose one(r,p,s): ";
    cin>> b;
    
   if(a=='r' && b=='r'){
       cout<<"tie";
   }else if(a=='r' && b=='p'){
       cout<<"2nd wins";
   }else if(a=='r' && b=='s'){
       cout<<"1st wins";
   }else if(a=='p' && b=='p'){
       cout<<"tie";
   }else if(a=='p' && b=='s'){
       cout<<"2nd wins";
   }else if(a=='p' && b=='r'){
       cout<<"1st wins";
   }else if(a=='s' && b=='s'){
       cout<<"tie";
   }else if(a=='s' && b=='p'){
       cout<<"1st wins";
   }else if(a=='s' && b=='r'){
       cout<<"2nd wins";
   }
    
    return 0;
}