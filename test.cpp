#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){


  int t,n,a[n],sum=0;
    cin>>t;
    while (t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            sum+=a[i];

        }
        if(sum==0){
            for (int i =1; i <n; i++)
            {
                cout<<"+";
            }
            

        }
       

    }
    

}