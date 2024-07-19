// function print 1 to n prime number
#include <iostream>
#include<math.h>
using namespace std;
bool countprime(int n)
{
   for(int i=2;i<n;i++)
   {
       if(n%i==0)
       {
                  return false;
       }
   }
   return true;
}
int main() 
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    
    for(int i=2;i<=n;i++)
    {
        bool isprime=countprime(i);
        if(isprime)
        cout<<i<<" ";
    }
}
