#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,sec=0;
    cin>>n>>m;
    int A[m];

    for (int i = 0; i <m; i++)
    {
       cin>>A[i];
    }
    sec=A[0]-1;
    for (int i =0; i <m-1; i++)
    {
       
        if(A[i]>A[i+1]){
            sec+=n-(A[i]-A[i+1]);
        }
        else{
            sec+=(A[i+1]-A[i]);
        }
    }
    cout<<sec<<endl;
    
    

return 0;
    
}
