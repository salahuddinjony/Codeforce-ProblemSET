#include<bits/stdc++.h>
using namespace std;
int a[101],n,m,mx=0,mxi,i;
int main(){
    
    cin>>n>>m;
    for (i = 1; i <=n; i++)
    {
        cin>>a[i];
        if(mx<=ceil((double)a[i]/m)){
            mx=ceil((double)a[i]/m);
            mxi=i;
        }
    }
    cout<<mxi;
    

}