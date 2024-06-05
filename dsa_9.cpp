

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int value;
	    int t1=0,t2=0;
	    for(int i=1;i<=10;i++){
	        cin>>value;
	        if(i%2==0){
	            t2+=value;
	        }else{
	            t1+=value;
	        }
	    }
	    
	    if(t1>t2){
	        cout<<1<<endl;
	    }else if(t2>t1){
	        cout<<2<<endl;
	    }else{
	        cout<<0<<endl;
	    }
    }
}
