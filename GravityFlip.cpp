#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c[n]; 
    for (int i =0; i <n; i++)
    {
        cin>>c[i];
    }
    sort(c,c+n);
    for (int i =0; i <n; i++)
    {
        cout<<c[i]<<" ";
    }
    
    
}