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
       if(digi%2==0)
       {
           m1 = m1*10+digi; 
       }
       n1 /= 10;   
   }
   cout<<m1<<"\n"; 
   
   int sum = 0;
   n1 = n;
   while(n1!=0)
   {
       int digi = n1%10; 
       sum += digi;      
       n1 /= 10;          
   }
   cout<<sum<<"\n";
   
  
    return 0;
}