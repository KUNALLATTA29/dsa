

#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t;
  cin >> t; 
  while(t--)
  {
       int n;
       cin >> n;
       int divisors[n];
       int i = 1;
       int j = 0;
       while (i <= n)
        {  
            if (n%i==0)
            {
                divisors[j] = i;
                j++;
            }
            
            i++;
        }
        for(int i = 0; i < j; i++)
        {
          cout << divisors[i] << " ";   
        }
            cout << endl;
  }

}
