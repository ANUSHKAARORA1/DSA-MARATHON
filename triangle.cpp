// valid triangle
#include<iostream>
using namespace std;
int main()
{
 int a,b,c;// sides of triangle
 cout<<"enter sides of triangle";
cin>>a>>b>>c;
if(a+b>c && a+c>b && b+c>a )
cout<<"valid triangle";

else
cout<<"invalid triangle";
}
