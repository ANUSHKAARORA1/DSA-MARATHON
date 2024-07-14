//print pattern 
/*
A B C
D E F
G H I
*/
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter number";
cin>>n;
int i=1;
char count='A';
while(i<=n)
{
    int j=1;
    while(j<=n)
    {
        cout<<count<<" ";
        count++;
        j++;
    }
    cout<<endl;
    i++;
}
}
