//print prime number
// prime: number divisible by 1 and itself
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter number";
cin>>n;
int i=2;
while(i<n)
{
    if(n%i==0)
    {
         cout<<"not prime";
         return 0;
    }
    i=i+1;
}
cout<<"prime";
return 0;
}
