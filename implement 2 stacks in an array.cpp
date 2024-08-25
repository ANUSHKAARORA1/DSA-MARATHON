/******************************************************************************
implement 2 stacks in an array
*******************************************************************************/
#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;
    
    Stack(int capacity)
    {
        arr=new int[capacity];
        size=capacity;
        top1=-1;
        top2=size;
    }
    void push1(int val)
    {
        if(top2-top1==1){
            cout<<"stackover flow"<<endl;
        }
        else{
            top1++;
            arr[top1]=val;
        }
    }
     void push2(int val)
    {
        if(top2-top1==1){
            cout<<"stack over flow"<<endl;
        }
        else{
            top2--;
            arr[top2]=val;
        }
    }
    void pop1(){
        if(top1==-1){
            cout<<"stack under flow"<<endl;
        }
        else{
            arr[top1]=0;
            top1--;
        }
    }
     void pop2(){
        if(top2==size){
            cout<<"stack under flow"<<endl;
        }
        else{
            arr[top2]=0;
            top2++;
        }
    }
    void print(){
        cout<<"top1: "<<top1<<endl;
         cout<<"top2: "<<top2<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<endl;
        }
    }
};
int main()
{
    Stack s(5);
    s.push1(10);
    s.push1(20);
    s.push2(30);
    s.push2(40);
    s.push1(50);
    s.push1(60);
    s.print();
    s.pop1();
    s.pop2();
    s.print();
}
