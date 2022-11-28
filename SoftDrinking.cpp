#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int tl=(k*l)/nl;
    int limes=c*d;
    int salt=p/np;
    int toast=min(tl,limes);
        toast=min(toast,salt);
    cout<<toast/n<<endl;

}