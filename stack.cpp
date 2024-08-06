//stack
#include <iostream>
#include<stack>
using namespace std;
int main() 
{
   stack<int>q;
   //insertion
   q.push(10);
   q.push(20);
   q.push(30);
   q.push(40);
  cout<<q.size()<<endl;
  q.pop();
  cout<<q.size()<<endl;
  q.pop();
  q.pop();
  q.pop();
  if(q.empty()==true)
  {
      cout<<"stack empty"<<endl;
  }
  else{
      cout<<"stacck is not empty"<<endl;
  }
    return 0;
}
