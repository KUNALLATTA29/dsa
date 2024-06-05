

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
 {
   int N, M;
   cin>>N>>M;
   if(N<=M){
       cout<<N<<endl;
   }else{
       cout<<2*N-M<<endl;
   }
   
  }
return 0;
}