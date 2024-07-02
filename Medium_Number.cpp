#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
      long long t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int mx=max(a,b);
            mx=max(mx,c);
        int mn=min(a,b);
            mn=min(mn,c);
        if ((mx==a and mn==c) || (mn==a and mx==c))
        {
            cout<<b<<endl;
        }
        else if ((mx==b and mn==c) || (mn==b and mx==c))
        {
           cout<<a<<endl;
        }
        else{

             cout<<c<<endl;


        }
        
        
        
        
    }
    
}