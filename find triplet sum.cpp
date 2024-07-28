//  find triplet sum
#include<iostream>
using namespace std;
void threesum (int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                 if(arr[i]+arr[j]+arr[k]==target){
                 cout<<"["<<i<<","<<j<<","<<k<<"]"<<endl;
            }
        }
        }
    }
}
      
int main(){
    int arr[1000],n,target;
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    cout<<"enter target";
    cin>>target;
    threesum(arr,n,target);

}
