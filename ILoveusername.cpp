#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a,mx,mn,t=0;
int main(){

    cin>>n>>a; //input 1st poits cause first contest isn't consider amazing
    mx=a,mn=a;
    for (int i =1; i <n; i++)
    {
        cin>>a;
        if(a>mx){
            mx=a;
            t++;
        }
        if(a<mn){
            mn=a;
            t++;
        }
    }
    cout<<t;
    


}