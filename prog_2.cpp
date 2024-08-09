#include<bits/stdc++.h>
using namespace std;

int main(){
    
    stack<string> st;
    st.push("apple");
    st.push("banana");
    st.push("cherry");
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}
