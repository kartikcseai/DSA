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
    int next[n];
    next[n-1]=-1;
    int max=v[n-1];
    for(int i=n-2;i>=0;i--){
        next[i]=max;
        if(v[i]>max) max=v[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<next[i]<<" ";
    }
}
