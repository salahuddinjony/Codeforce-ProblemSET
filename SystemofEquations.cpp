#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    cin>>n>>m;
    int mn=min(n,m);
    int cnt=0;
    for (int i = 0; i <=mn; i++)
    {
        int a,b;
        int Tempb=i;
       a=sqrt(n-Tempb); 
       
       if(a*a+i==n and a+i*i==m) cnt++;

    }
    cout<<cnt<<endl;
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/