#include<bits/stdc++.h>
using namespace std;
const int mx=1e5+123;
int a[mx];
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    int n;
    cin>>n;
   
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    for(int i=1; i<=n;i++)  a[i]=i;
    for (int i =n; i >=1; i--)
    {
        swap(a[i-1],a[i]);
    }
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<endl;
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/