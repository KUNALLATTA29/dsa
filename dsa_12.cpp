#include <iostream>
#include <string>
using namespace std;

int main() 
{
  int t;
  cin>>t; 
  while(t--)
  {
   string A,B;
   cin>>A>>B;
   int a_count = 0;
   int b_count = 0;
   int common = 0;
   for(int i=0; i<A.length();i++)
      {
        if(A[i]=='1')
          {
            a_count++;
          }
          
      }
   for(int i=0; i<B.length();i++)
      {
        if(B[i]=='1')
          {
            b_count++;
          }
          
      }
   for(int i=0; i<A.length();i++)
      {
        if(A[i]==B[i])
          {
            common++;
          }
          
      }
  cout<<a_count<<" "<<b_count<<"  "<<common<<endl;
  }
 return 0;
}
   