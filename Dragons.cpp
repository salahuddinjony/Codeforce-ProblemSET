#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    int s,n;
    cin>>s>>n;
    vector<pair<int,int> >v(n);
    for (int i = 0; i <n; i++)
    {
        int a,b;
        cin>>a>>b;
        v[i]={a,b};
    }
    sort(v.begin(),v.end());
    int strength=s;
    for (int i = 0; i <n; i++)
    {
        if(strength> v[i].first) strength+=v[i].second;
        else{
            cout<<"NO"<<endl;
            return 0;
        }
       
    }
    cout<<"YES"<<endl;
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/