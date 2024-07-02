#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,a,b,x;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        x=abs(a-(ceil((double)a/b )*b));
        cout<<x<<endl;
    }
    
}