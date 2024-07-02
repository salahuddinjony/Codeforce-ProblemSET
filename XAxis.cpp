#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int a,b,c;
       cin>>a>>b>>c;
       int mx=max(a,b);
       int mi=min(a,b);
       mi=min(mi,c);
       mx=max(mx,c);
       cout<<abs(mx-mi)<<endl;


    }
    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/