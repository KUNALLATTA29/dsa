#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int N;
	    cin >> N;
	    int A[N];
	    for(int i = 0; i < N; i++)
	    {
	        cin >> A[i];
	    }
	    int count_neg = 0;
        bool count_zero = false;
        for(int i = 0; i < N; i++)
        {
            if(A[i] == 0)
            {
                count_zero=true;
            }
            else if(A[i] < 0)
            {
                count_neg+=1;
            } 
        }
        if(count_neg%2 == 0 || count_zero)
        {
            cout << 0 << endl;
        }else{
            cout<<1<<endl;
        }
       
	}
}	