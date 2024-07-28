//reverse array
#include<iostream>
using namespace std;
void reversearray(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
       swap(arr[i],arr[j]);
       i++;
       j--;
    }
}
int main(){
    int arr[1000],n;
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    reversearray(arr,n);
    for(int i=0;i<n;i++){
      cout<<arr[i];
    }
}
