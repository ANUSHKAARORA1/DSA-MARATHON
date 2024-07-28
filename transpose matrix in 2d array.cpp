//transpose matrix in 2d array
#include<iostream>
#include<climits>
using namespace std;
void transpose(int arr[][3],int rowsize,int colsize){
    for(int i=0;i<rowsize;i++){
        for(int j=i;j<colsize;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}
int main(){
    int arr[3][3];
    int rowsize=3;
    int colsize=3;
  
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
transpose(arr,rowsize,colsize);
for(int i=0;i<rowsize;i++){
    for(int j=0;j<colsize;j++){
        cout<<arr[i][j];
    }
}
   
}
