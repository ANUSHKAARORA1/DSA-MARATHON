/*
Pattern
N = 4
1
21
321
4321
*/
#include<iostream>
using namespace std;

int main(){
  int i,j,n;
    cin>>n;
    for(i=1;i<n;i--){
       int p;
        for(j=1;j<n;j++){
          cout<<p;
          p--;
        }
        cout<<endl;
        
    }
}
*/

/*
Pattern
N = 4
1
21
321
4321
*/
#include<iostream>
using namespace std;

int main(){
  int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
          cout<<i-j+1;
          
        }
        cout<<endl;
        
    }
}
