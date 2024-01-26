#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x[4],y[4],squre;
    cin>>t;
    while (t--)
    {
        for (int i = 0; i < 4; i++)
        {
            cin>>x[i]>>y[i];
        }
        if(x[0]!=x[1]){
            squre=abs(x[0]-x[1]);
            cout<<(squre*squre)<<endl;
        }
        else{
            squre=abs(y[0]-y[1]);
            cout<<(squre*squre)<<endl;
        }
        
        
        
        }
        
    }
    





/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/