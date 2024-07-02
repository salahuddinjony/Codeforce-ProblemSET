#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    while (t--)
    {
        cin>>s;
        cout<<s;
        reverse(s.begin(),s.end());
        cout<<s<<endl; 
    }
    
}
