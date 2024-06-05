

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int N, K;
	    cin >> N >> K;
	    int A[N];

        int pos = 0;
        int neg = 0;
        int divk = 0;
        for(int i = 0;i<N; i++)
        {
            cin >> A[i];
        }
        for(int i = 0; i < N; i++)
        {
           
            if(A[i]< 0)
            {
                neg = neg + 1;
            }
            
            else if(A[i]> 0)
            {
                pos = pos + 1;
            }
            
            if (A[i]%K==0)   
            {
                divk = divk + 1;
            }
        }
        cout << pos <<" "<< neg <<" "<< divk << endl;
	}
}