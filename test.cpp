#include<bits/stdc++.h>
using namespace std;
int x[5],n,i,t;
int main()
{
     cin>>n;
    while(n--) {
        cin>>t;
        x[t]++;
    }
    x[1]=max(x[1]-x[3],0);
     cout<<x[3]+x[4]+ceil((double)(x[1]+2*x[2])/4)<<endl;
    return 0;
}
