//even or odd
// number is even if n&1==0
//number is odd if n&1!=0
#include <iostream>
using namespace std;
int main() 
{
    int n;
   cin>>n;
   if((n&1)==0)
   cout<<"even num"<<endl;
   else
   cout<<"odd num"<<endl;

    return 0;
}
