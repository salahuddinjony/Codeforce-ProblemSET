#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  t;
    cin>>t;
    while (t--)
    {
        long long n,x,y;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        x=arr[1]-arr[0];
        y=arr[n-1];

       if(y%x==0){

           cout<<y/x<<endl;

        }
        else{
             cout<<arr[n-1]<<endl;
        }
       


    }
    
}