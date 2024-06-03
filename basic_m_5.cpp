#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int sum=0;
        if(y<=x){
            sum=y;
        }else if(y>x){
            int tem=y-x;
            y=y-tem;
            sum+=y;
            sum+=(2*tem);
        }
        cout<<sum<<endl;
    }
	

}
