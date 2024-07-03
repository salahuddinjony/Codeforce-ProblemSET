#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int MAX = 200007;
int result[MAX];
int main(){
    optimize();
    int n,m;
    cin>>n>>m;
    map<string, string > ipAd;
    for (int i = 0; i <n; i++)
    {
       string name,ip;
       cin>>name>>ip;
       ipAd[ip]=name;
    }
    
   
    while (m--)
    {
        string name1, ip;
        cin>>name1>>ip;
        ip.pop_back();

        cout<<name1<<" "<<ip<<";"<<" "<<"#"<<ipAd[ip]<<endl;

        
    }
    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/