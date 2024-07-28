// //print extreme values
// arr[]=10 20 30 40 50 60
// o/p  10 60 20 50 30  40
// using 2 pointer approach take i left index , j right index
#include<iostream>
using namespace std;
void printextreme(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(i==j){
            cout<<arr[i];
            i++;
        }
        else{
        cout<<arr[i]<<" ";
        cout<<arr[j]<<" ";
        i++;
        j--;
    }}
}
int main(){
    int arr[1000],n;
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    printextreme(arr,n);
}
