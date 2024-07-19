// function find factorial of a number
#include <iostream>
#include<math.h>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main() 
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
  int result=factorial(n);
  cout<<result;
}
