#include <iostream>
using namespace std;
class Node{
    public:
    Node *prev;
    int data;
    Node *next;
     Node(int value){
         data=value;
         prev=NULL;
         next=NULL;
     }
};
void insertattail(int value,Node*&head,Node*&tail){
    //if LL is empty
    if(head==NULL &&tail==NULL){
        Node *newnode=new Node(value);
        head=newnode;
        tail=newnode;
    }
    else{
        //LL is not empty
        Node*newnode=new Node(value);
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}
void print(Node* head)
{
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
Node*head=NULL;
Node*tail=NULL;
insertattail(10,head,tail);
insertattail(20,head,tail);
insertattail(30,head,tail);
print(head);
    return 0;
}
