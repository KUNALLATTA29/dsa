#include <iostream>
#include <string>
using namespace std;

int main() 
{
  int t;
  cin>>t; 
  while(t--)
  {
   string A;
   cin>>A;
   int flag=0;

   for(int i=0; i<A.length();i++)
      {
        if(A[i]=='0' || A[i]=='5')
          {
            flag = 1;
            break;
          } 
      }
    if(flag == 1)
      {
        cout<<"Yes"<<endl;
      }
    else
      {
        cout<<"No"<<endl;
      }

  }
 return 0;
}
   