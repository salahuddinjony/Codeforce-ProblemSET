#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int p,q,n,a;
set<int>st;
cin>>n>>p;
while(p--){
    
    cin>>a,st.insert(a);
}

cin>>q;

while(q--){
    cin>>a,st.insert(a);
}
if(st.size()==n)
    cout<<"I become the guy.";
else 
    cout<<"Oh, my keyboard!";

return 0;


}