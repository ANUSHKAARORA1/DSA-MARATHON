//create no. using digit
#include<iostream>
using namespace std;
int createdigit(int n)
{
    int num=0;
    for(int i=0;i<n;i++)
    {
        int digit;
        cout<<"enter digit"<<endl;
        cin>>digit;
        num=num*10+digit;
    }
    return num;
}
int main()
{
    int n;
    cout<<"enter number of digits";
    cin>>n;
    int result=createdigit(n);
    cout<<result;
    
}
