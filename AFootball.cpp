#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,A=0,B=0;
    cin>>n;
    string s[n],teamA,teamB;
    int i=0;
    for (; i <n; i++)
    {
        cin>>s[i];
        teamA=s[0];
        if(teamA==s[i]){
            A++;
        }
        else{
            teamB=s[i];
            B++; 
        }
    }
    if(A>B)
    cout<<teamA<<endl;
    else
    cout<<teamB<<endl;
    
return 0;
    
}
