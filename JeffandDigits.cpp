#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sF=0,sZ=0;
    cin>>n;
    int A[n];
    for (int i = 0; i <n; i++)
    {
        cin>>A[i];
        if(A[i]==0){
            sZ++;
        }
        else{
            sF++;
        }
        
    }

   // cout<<sF<<sZ<<endl;
    
    if(sZ==0){
        cout<<-1;
        exit(0);
       
    }
    else if (sZ>0 and sF<9)
    {
        cout<<0<<endl;
        exit(0);
       
    }
    else
    {
        for (int i =sF; i >=1; i--)
        {
           if(sF%9==0){

           for (int i =1; i <=sF; i++)
           {
            cout<<5;
           
           }
           break;
           }
           else{
            sF--;
           }
        }
        
    }
    for (int i =1; i <=sZ; i++)
    {
       cout<<0;
    }
    
    
    
    

return 0;
    
}