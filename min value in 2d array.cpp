//min value in 2d array
#include<iostream>
#include<climits>
using namespace std;
void minvalue(int arr[][4],int rowsize,int colsize){
    int mini=INT_MAX;
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            mini=min(mini,arr[i][j]);
        }
    }
    cout<<mini;
}
int main(){
    int arr[3][4];
    int rowsize=3;
    int colsize=4;
  
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
minvalue(arr,rowsize,colsize);
   
}
