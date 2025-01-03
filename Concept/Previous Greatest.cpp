#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Size of array : ";
    cin>>n;
    cout<<"ENTER ELEMENTS."<<endl;
    for(int i=0;i<n;i++){
        int x;
        cout<<"element at "<<i<<" ";
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    int prev[n];
    prev[0]=-1;
    int max=v[0];
    for(int i=1;i<n;i++){
        prev[i]=max;
        if(v[i]>max) max=v[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<prev[i]<<" ";
    }
}
