#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        int n;
        cin>>n;
        cin>>s;
        int B=INT_MAX,W=INT_MIN;
        for (int i =0; i <n; i++)
        {
            if(s[i]=='B'){
                B=min(B,i+1);
                W=max(W,i+1);
            }
        }
        cout<<(W-B)+1<<endl; 
    }
    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/