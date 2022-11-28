#include<iostream>
using namespace std;
int main(){
    int t,l,r,left=0,right=0,lt=0,rt=0;
    cin>>t;
    int d=t;
    
    
    while (t--)
    {
        cin>>l>>r;
        left+=l;
        right+=r;
    }


    if ((d/2)<left)
    {
        lt=d-left;
    }
    else if ((d/2)>=left)
    {
        lt=left;
    }

    
    if((d/2)<right)
    {
        rt=d-right;
    }
    else if ((d/2)>=right)
    {
        rt=right;
    }

    

    cout<<lt+rt<<endl;

     
    
    
    
    
    
}