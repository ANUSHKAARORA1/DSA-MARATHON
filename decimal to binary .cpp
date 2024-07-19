// convert decimal to binary
#include <iostream>
#include<math.h>
using namespace std;
int main() 
{
    int n;
   cin>>n;
// lets take decimal number 3 convert it into binary number .. lets keep on dividing 3 by 2 we will get remainder will number become 0 remainder is 1100 we will reverse the number and get the desired binary number
int i=0;
int binaryno=0;
while(n>0)
{
  int bit=n&1; // bit=n%2;
  binaryno=binaryno+bit*pow(10,i++);
  n=n>>1; //n=n/2;

}
 cout<<binaryno;
    return 0;
}
