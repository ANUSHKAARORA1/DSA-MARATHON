#include <iostream>
#include<math.h>
using namespace std;
int prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
        else
        return 1;
    }
}
int main() 
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    int res=prime(n);
    if(res==0)
    cout<<"not prime";
    else
    cout<<"prime";
    

}
