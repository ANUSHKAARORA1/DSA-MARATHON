/******************************************************************************
stack implementation without using stack data structure
*******************************************************************************/
#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top;
    
    Stack(int capacity)
    {
        arr=new int[capacity];
        size=capacity;
        top=-1;
    }
    void push(int val)
    {
        if(top==size-1){
            cout<<"stackover flow"<<endl;
        }
        else{
            top++;
            arr[top]=val;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"stackunder flow"<<endl;
        }
        else{
            arr[top]=0;
            top--;
        }
    }
    int getsize(){
        return top+1;
    }
    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    int gettop(){
        if(top==-1){
            cout<<"no eleemnt in stack"<<endl;
        }
        else{
            return arr[top];
        }
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<endl;
        }
    }
};
int main()
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.print();
    cout<<"size of stack"<<s.getsize()<<endl;;
    cout<<s.gettop()<<endl;
    s.pop();
    s.pop();
    s.print();
    cout<<"size of stack"<<s.getsize();
    cout<<s.gettop();
}
