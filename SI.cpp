// simple interest 
#include<iostream>
using namespace std;
int main()
{
    float P,R,T;
    cout<<"enter principle, rate,time";
    cin>>P>>R>>T;
    float SI;
    SI=(P*R*T)/100;
    cout<<"Simple Interest is : "<<SI;
}
