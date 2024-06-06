
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int t1, t2, r1, r2;
	    cin >> t1 >> t2 >> r1 >> r2;
	    double s1=pow(t1,2)/pow(r1,3);
	    double s2=pow(t2,2)/pow(r2,3);
	    if(s1==s2){
	        cout<<"yes"<<endl;
	    }else{
	        cout<<"no"<<endl;
	    }
	}
}	