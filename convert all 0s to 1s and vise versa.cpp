//convert all 0s to 1s and vise versa
#include<iostream>
using namespace std;
void convert0to1and1to0 (int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            arr[i]=1;
        }
        else{
            arr[i]=0;
        }
    }
}
int main(){
    int arr[1000],n;
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    convert0to1and1to0(arr,n);
    for(int i=0;i<n;i++){
      cout<<arr[i];
    }
}
