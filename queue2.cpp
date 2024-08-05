// queue2
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>first;
    queue<int>second;
    first.push(10);
  first.push(20);
   second.push(30);
    second.push(40);
    first.swap(second);
    cout<<first.front()<<" "<<second.front()<<endl;
}
