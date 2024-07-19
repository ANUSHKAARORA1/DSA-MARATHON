// reverse integer
#include<iostream>
using namespace std;
int reverse(int n)
{
    int rev=0;
    while(n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
   int result= reverse(n);
   cout<<result;
}
