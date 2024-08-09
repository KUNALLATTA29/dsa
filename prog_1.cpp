#include<bits/stdc++.h>
using namespace std;

int main(){
    
    stack<int> st;
    for(int i=1;i<=10;i++){
        st.push(i);
    }
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}
