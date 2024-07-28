//linear seach in 2d array
#include<iostream>
using namespace std;
bool linearsearch(int arr[][4],int rowsize,int colsize,int target){
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[3][4];
    int rowsize=3;
    int colsize=4;
    int target;
    cin>>target;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    bool ans=linearsearch(arr,rowsize,colsize,target);
    cout<<ans;
}
