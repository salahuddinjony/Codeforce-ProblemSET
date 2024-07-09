#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    int n,a,b;
    cin>>n>>a>>b;
    int ans=0;
   for (int i = 1; i <=n; i++)
   {
    if(i-1>=a and n-i<=b) ans++;
   }
   cout<<ans<<endl;
   


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/