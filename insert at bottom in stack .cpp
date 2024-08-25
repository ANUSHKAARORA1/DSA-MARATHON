/******************************************************************************
insert at bottom in stack 
*******************************************************************************/
#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int>&s,int value){
    if(s.empty()){
        s.push(value);
        return;
    }
    int topelement=s.top();
    s.pop();
    insertatbottom(s,value);
    s.push(topelement);
    
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int value=13;
    insertatbottom(s,value);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
