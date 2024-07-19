// convert binary to decimal
#include <iostream>
#include<math.h>
using namespace std;
int main() 
{
    int n;
   cin>>n;
   int bits;
   int sum=0;
   int i=0;
//   lets take binary number (0100)2 ->( )10 decimal number so take a bit and multiple it by 2^i 
//   ex: 0*pow(2,0) +0*pow(2,1)+1*pow(2,2)+0*pow(2,3) =>4 in decimal
while(n!=0)
{
    int bits=n%10;
    sum=bits*pow(2,i++)+sum;
    n=n/10;
}
cout<<sum;
    return 0;
}
