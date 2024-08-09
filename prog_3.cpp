#include<bits/stdc++.h>
using namespace std;

int main(){
    
    stack<int> st;
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    st.push(a);
    st.push(b);
    st.push(c);
    st.push(d);
    st.push(e);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}
