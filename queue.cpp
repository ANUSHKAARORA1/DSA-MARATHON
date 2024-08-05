// queue
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    if(q.empty()==true){
        cout<<"queue is empty";
    }
    else{
        cout<<"queue is not empty";
    }
}
