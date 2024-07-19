// function display area of circle
#include <iostream>
#include<math.h>
using namespace std;
float area_of_circle(int r)
{
    float a;
    a= 3.14*r*r;
    return a;
}
int main() 
{
    int r;
    cout<<"enter radius"<<endl;
    cin>>r;
  float result=area_of_circle(r);
  cout<<result;
}
