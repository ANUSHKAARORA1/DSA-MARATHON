//dequeue
#include <iostream>
#include<queue>
using namespace std;
int main() 
{
   deque<int>dq;
   dq.push_back(10);
   dq.push_back(20);
   dq.push_back(30);
   dq.push_back(40);
   dq.push_front(100);
   dq.push_front(200);
   dq.pop_front();
   dq.pop_back();
  cout<<dq[0]<<" ";
  cout<<dq[1]<<" "<<dq[2]<<" "<<dq[3]<<" "<<dq[4]<<" "<<dq[5];

    return 0;
}
