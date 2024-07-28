//count zeros and ones
#include<iostream>
using namespace std;
void printzerosandones(int arr[],int n){
    int c0=0;
    int c1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            c0++;
        }
        else{
            c1++;
        }
    }
    cout<<"number of 0s"<<c0<<endl;
    cout<<"mumber of 1s"<<c1<<endl;
}
int main(){
    int arr[1000],n;
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    printzerosandones(arr,n);
}
