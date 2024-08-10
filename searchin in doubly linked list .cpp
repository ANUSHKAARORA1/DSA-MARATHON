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
int getlen(Node*head){
    Node*temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void insertatpos(int pos,int value,Node*head,Node*tail){
    int length=getlen(head);
    if(pos==1){
        insertathead(value,head,tail);
    }
    else if(pos==length+1){
        insertattail(value,head,tail);
    }
    else{
        Node *temp=head;
        for(int i=0;i<pos-2;i++){
            temp=temp->next;
        }
        Node*newnode=new Node(value);
        Node *forward=temp->next;
        newnode->prev=temp;
        temp->next=newnode;
        newnode->next=forward;
        forward->prev=newnode;
        
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
bool search(Node*head,int target){
    Node*temp=head;
    while(temp!=NULL){
        if(temp->data==target){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int main()
{
Node*head=NULL;
Node*tail=NULL;
insertattail(10,head,tail);
insertattail(20,head,tail);
insertattail(30,head,tail);
insertatpos(2,40,head,tail);
print(head);
int target;
cout<<"target :";
cin>>target;
search(head,target);
if(true ){
    cout<<"found";
}
else{
    cout<<"not found";
}

    return 0;
}
