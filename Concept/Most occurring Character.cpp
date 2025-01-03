#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

//This is NOT the efficient solution because of number of operations

//     string s="physicswallah";
//     int max=0;
//     for(int i=0;i<s.length();i++){
//         char ch=s[i];
//         int count=1;
//         for(int j=i+1;j<s.length();j++){
//             if(s[j]==s[i]) count++;
//         }
//         if(count>max) max=count;
//     }

//     for(int i=0;i<s.length();i++){
//         char ch=s[i];
//         int count=1;
//         for(int j=i+1;j<s.length();j++){
//             if(s[j]==s[i]) count++;
//         }
//         if(count==max) cout<<ch<<" "<<count<<endl;
//     }


    // Efficient way
    string s="leetcode";
    vector<int> alpha(26,0);
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int ascii=(int)ch;
        alpha[ascii-97]++;
    }
    int mx=0;
    for(int i=0;i<26;i++){
        if(alpha[i]>mx) mx=alpha[i];
    }
    for(int i=0;i<26;i++){
        if(alpha[i]==mx) {
            int ascii=i+97;
            char ch=(char)ascii;
            cout<<ch<<" "<<mx<<endl;
        }
    }

}