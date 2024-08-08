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
    head=insertattail(10,head,tail);
    head=insertattail(20,head,tail);
    head=insertattail(30,head,tail);
    print(head);
}
