//print pattern 
/*
A B C
B C D
C D E
*/
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter number";
cin>>n;
int i=1;
while(i<=n)
{
    int j=1;
    while(j<=n)
    {
       char a='A'+i+j-2;
        cout<<a<<" ";
        j++;
    }
    cout<<endl;
    i++;
}
}
