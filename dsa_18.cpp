
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int A,B;
	    cin >> A >> B;

	    int minAB = min(A,B);
        int maxAB = max(A,B);
        int flag = 0;
        
        while (minAB <= maxAB)
        {
          if (minAB == maxAB)  
          {
            flag =1;
            break;
          }    
          else
          {
            minAB = minAB*2;  
          }      
        }
        
        if (flag == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
	}
}	