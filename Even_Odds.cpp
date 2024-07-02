#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    long long n,k,x;
   cin>>n>>k;
    x=(n/2)+(n%2);
   if(k>x){

       cout<<(k-x)*2;
   }
   
   else{
       cout<<(1+(k-1)*2); ///1000000000000 500000000001
   }
    
    
    
    
}