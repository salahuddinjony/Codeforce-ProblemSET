#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int, int>m;
    for (int i = 0; i <n; i++)
    {
        int a;
        cin>>a;
        m[a]++;
    }
    int ans=0;
    for(auto u: m){
        if(u.first <= u.second) ans+=(u.second-u.first);
        else ans+=u.second;
    }
    
    cout<<ans<<endl;
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/