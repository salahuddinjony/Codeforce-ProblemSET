#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t=0,m=0;
    cin>>n;
    int a[n];
    for (int i =1; i <=n; i++)
    {
        cin>>a[i];
        t+=a[i];

    }
    for (int i =1; i <=5; i++)
    {
        if((i+t)%(n+1)!=1){
            m++;
        }
    }
    cout<<m;
    
    

}