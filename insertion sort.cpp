// insertion sort.
#include <iostream>
using namespace std; 
void insertionsort(int arr[], int n )
{
    for (int i=1;i<n;i++)
    {
    int temp=arr[i];
    int j=i-1;
        while(j>=0&&arr[j]>temp)
        {
                 arr[j+1]=arr[j];
                 j--;
        }
      arr[j+1]=temp;  
}}
int main() {
    int arr[10000];
    int n;
    cout << "enter number of elemnets in array ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
