// Linear Search
#include<iostream>
using namespace std;\
bool linear_search(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
          return true;
        }
    }
   return false;
}
int main(){
    int n, target;
    int arr[10000];
    cout<<"enter number of  elements :";
    cin>>n;
    cout<<"elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter target";
    cin>>target;
   bool ans= linear_search(arr,n,target);
   cout<<ans;

}
