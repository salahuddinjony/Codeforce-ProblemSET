#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,as=0;
        cin>>n;
        char s[n];
        cin>>s;
        for (int i = 0; i <n; i++)
        {
             as=max(as,int(s[i]));
            
        }
         cout<<(as-96)<<endl;
        
    }
    

}