//vector comparator
// sort arr: [[1,44],[0,55],[0,22],[0,11]] according to increasing order of first num
#include<bits/stdc++.h>
#include<vector>

using namespace std;
bool comparator(vector<int>&a,vector<int>&b){
    return a[1]<b[1];
}
void print(vector<vector<int>>&v){
    for(int i=0;i<v.size();i++){
        vector<int>temp=v[i];
        int a=temp[0];
        int b=temp[1];
        cout<<a<<" "<<b;
    }
}
int main(){
    vector<vector<int>>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    vector<int>temp;
    temp.push_back(a);
    temp.push_back(b);
    v.push_back(temp);
    }
    sort(v.begin(),v.end(),comparator);
   print(v);
}
