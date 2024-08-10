
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
void insertathead(int value,Node*&head,Node*&tail){
    //if ll is empty
    if(head==NULL&&tail==NULL)
    {
        Node*newnode=new Node(value);
        head=newnode;
        tail=newnode;
    }
    else{
        //ll is not empty
        Node *newnode=new Node(value);
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
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
insertathead(10,head,tail);
insertathead(20,head,tail);
insertathead(30,head,tail);
print(head);

    return 0;
}
