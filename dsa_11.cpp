#include<bits/stdc++.h>
using namespace std;

int main() 
{
  int t;
  cin>>t; 
  while(t--)
  {
   string S,A,B;
   cin>>S;

    
A=S;

  reverse(S.begin(),S.end());
  B=S;

   for(int i=0; i<S.length();i++)
       {
         cout<<A[i];
       }
   cout<<endl;
   for(int i=0; i<S.length();i++)
       {
         cout<<B[i];
       }
   cout<<endl;
  }
 return 0;
}
   