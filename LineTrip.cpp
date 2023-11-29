#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,x,ans;
    cin>>t;
    while (t--)
    {
        cin>>n>>x;
        int A[n];
        for (int i = 0; i <n; i++)
        {
            cin>>A[i];
            
        }
        ans=0;
        ans=max(ans,A[0]-0);
        ans=max(ans,(2*(x-A[n-1])));

        for (int i =1; i <n; i++)
        {
            ans=max(ans,(A[i]-A[i-1]));
        }
        cout<<ans<<endl;
        
        
        
    }
    

return 0;
    
}