#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int n1 = n;
   int m1 = 0;
   while(n1!=0)
   {
       int digi = n1%10;  
       if(digi<=5)
       {
           m1 = m1*10+digi; 
       }
       n1 /= 10;   
   }
   cout<<m1<<"\n"; 
   
   int product = 1;
   n1 = n;
   while(n1!=0)
   {
       int digi = n1%10; 
       product *= digi;      
       n1 /= 10;           
   }
   cout<<product<<"\n";
  
    return 0;
}