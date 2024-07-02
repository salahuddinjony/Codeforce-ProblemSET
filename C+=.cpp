#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,n,count=0;
        cin>>a>>b>>n;
        while (max(a,b)<=n)
        {
            if(a>b)
                b+=a;
            else
                a+=b;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/