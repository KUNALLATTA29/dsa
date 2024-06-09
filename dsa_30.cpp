
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X;

        cin >> X;
        
        if(X>100){
            cout<<X-10<<endl;
        }else{
            cout<<X<<endl;
        }
    }
    return 0;
}