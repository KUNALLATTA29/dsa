#include<bits/stdc++.h>
using namespace std;

stack<string> zoom(stack<string> st){
    stack<string> tem;
    while(!st.empty()){
        tem.push(st.top());
        st.pop();
    }
    
    return tem;
}

int main(){
    
    stack<string> st;
    st.push("first");
    st.push("second");
    st.push("third");
    st.push("fourth");
    
    stack<string> ans = zoom(st);
    
    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }
    
   
    return 0;
}
