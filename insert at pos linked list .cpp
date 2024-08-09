#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    //constructor
    node(int value){
        this->data=value;
        this->next=NULL;
    }
};
int getlength(node *&head){
    int len=0;
    node *temp=head;
    while(temp!=head){
        temp=temp->next;
        len++;
    }
    return len;
}
node *insertathead(int value,node* &head,node* &tail){
    if(head==NULL && tail==NULL){
        node *newnode=new node(value);
        head=newnode;
        tail=newnode;
    }
    else{
        node *newnode=new node(value);
        newnode->next=head;
        head=newnode;
    }
    return head;
}
node *insertattail(int value,node* &head,node* &tail){
    if(head==NULL && tail==NULL){
        node *newnode=new node(value);
        head=newnode;
        tail=newnode;
    }
    else{
        node *newnode=new node(value);
        tail->next=newnode;
        tail=newnode;
    }
    return head;
}
node *insertatpos(int pos,int value,node* &head,node* &tail){
    int length=getlength(head);
  if(pos==1){
        insertathead(value,head,tail);
    }
    else if(pos=length+1){
        insertattail(value,head,tail);
     }
     else{
         node*temp=head;
for(int i=0;i<pos-2;i++){
            temp=temp->next;
         }
         node*newnode=new node(value);
        newnode->next=temp->next;
        temp->next=newnode;
    }
    return head;
 }
void print(node*&head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node*head=NULL;
    node*tail=NULL;
   
     head=insertatpos(1,40,head,tail);
  head=insertatpos(2,50,head,tail);
   head=insertatpos(3,60,head,tail);
    
    int pos;
   
    print(head);
}
