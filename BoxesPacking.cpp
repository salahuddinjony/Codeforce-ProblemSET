#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int>cnt;
    int mx=0;
    while (n--)
    {
        int a;
        cin>>a;
        cnt[a]++;

    }
    int count=0;
    for (const auto& p : cnt) {
        count=max(count,p.second);
    }
    cout<<count<<endl;

    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/