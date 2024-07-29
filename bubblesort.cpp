bubble sort.
#include <iostream>
using namespace std; 
void bubblesort(int arr[], int n )
{
    for (int i=1;i<n;i++)
    {
    bool swapped=false;
        for(int j=0;j<n-i;j++){
            if (arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
            swapped=true;
        }
        if(swapped=false)
        break;
}}
int main() {
    int arr[10000];
    int n;
    cout << "enter number of elemnets in array ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
