// count all set bits -> number of 1s
#include <iostream>
using namespace std;
int main() 
{
    int n;
   cin>>n;
   int setbit=0;
  while(n!=0)
  {
    //   let number be 3 so binary of 3 is 
    //   0000 0011 & 0000 0001 => 0000 0001 since last bit is 1 so add it to the setbit.
      int lastbit=(n&1);
      if(lastbit==1)
      setbit=setbit+1;
    //   now setbit become 1 and number left is 0000 0001 now do right shift to get next set bit 0000 0001 >>1 => 0000 0000 number become 0 and come out of while loop . and printed set bit value
      n=n>>1;
  }
cout<<setbit;
    return 0;
}
