// print of digit of integers
#include <iostream>
#include<math.h>
using namespace std;
void printdigit(int n)
{
    
    while(n>0)
    {
       int rem=n%10;
      cout<<"digit is:"<<rem<<endl;
        n=n/10;
    }
}
int main() 
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
  printdigit(n);
}
