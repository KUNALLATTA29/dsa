#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
     int data;
     Node *next;
    public:
        Node(int val)
        {
            data = val;
            next = nullptr; 
        };
};

class Linkedlist
{
    private:
      Node *head;
    public:
        Linkedlist()
        {
            head=nullptr;
        }
        void pushBack(int val)
        {
            Node *newnode = new Node(val);
            if(head == nullptr)
            {
                head=newnode;
            }
            else 
            {
                Node *temp = head;
                while(temp->next != nullptr)
                {
                    temp=temp->next;
                }
                temp->next=newnode;
            }
        }
        
        void display()
        {
            Node*temp = head;
            while(temp!=nullptr)
            {
                cout<<temp->data<<" -> ";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }
        
        ~Linkedlist()
        {
            Node *temp;
            while(head !=nullptr)
            {
                temp = head;
                head = head->next;
                delete temp;
            }
        }
};
int main()
{
    Linkedlist list;
    list.pushBack(70);
    list.pushBack(30);
    list.pushBack(80);
    cout<<"Linked List : ";
    list.display();
}
