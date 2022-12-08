#include<bits/stdc++.h>
using namespace std;
int main(){

   int n,m,x;
   long long v=0,p=0;
   cin>>n;
   int a[n],b[n];
   for (int i =1; i<=n; i++)
   {
       cin>>a[i];
       b[a[i]]=i;
   }
   cin>>m;
  while (m--)
  {
      cin>>x;
      v+=b[x];
      p+=n-b[x]+1;
  }
  cout<<v<<" "<<p;
  
   
   

   
}