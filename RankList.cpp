#include<bits/stdc++.h>
using namespace std;
/* bool cmp(const pair<int,int>p1,const pair<int,int>p2){
    if(p1.first>p2.first) return true;
    else if (p1.first==p2.first) return (p1.second< p2.second);
    return false;
    

} */
int main(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i].first>>v[i].second;
        v[i].first *=-1;

    } 
    sort(v.begin(), v.end());
    int ans=0;
    for(auto u: v) {
        if(u==v[k-1]) ans++; 
    }
    cout<<ans<<endl;


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/