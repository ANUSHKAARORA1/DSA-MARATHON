//find max in array
#include<iostream>
#include<limits.h>
using namespace std;
void maxi(int arr[],int n){
    int maximum=INT_MIN;
    for(int i=0;i<n;i++){
        maximum=max(maximum,arr[i]);
    }
    cout<<maximum;
}
int main(){
    int arr[10000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    maxi(arr,n);
}
