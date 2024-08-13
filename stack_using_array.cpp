#include<bits/stdc++.h>
using namespace std;

#define MAX 100

int Stack[MAX];
int top = -1;
    

bool isFull(){
        return top == MAX-1;
    }
    
    bool isEmpty(){
        return top == -1;
    }
    
    void push(int num){
        if(isFull()){
            cout<<"stack overflow"<<endl;
        }else{
            Stack[++top] = num;
            cout<<num<<" is pushed."<<endl;
        }
        
    }
    
    void pop(){
        if(isEmpty()){
            cout<<"stack is underflow"<<endl;
        }else{
            int k = Stack[top--];
            cout<<k<<" is poped."<<endl;
        }
    }
    
    int peek(){
        if(isEmpty()){
            return -1;
        }
        return Stack[top];
    }
    void display(){
        if(isEmpty()){
            cout<<"stack is empty.";
        }else{
            for(int i=top;i>=0;i--){
                cout<<Stack[i]<<" ";
            }
        }
        cout<<endl;
    }

int main(){
    
    push(100);
    push(200);
    push(300);
    cout<<peek();
    cout<<endl;
    cout<<peek();
    cout<<endl;
    display();
    
    
    return 0;
}