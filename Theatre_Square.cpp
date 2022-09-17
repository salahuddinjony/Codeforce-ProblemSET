#include<iostream>
using namespace std;
int main(){
    long long n,m,a,x,y=0;
    cin>>n>>m>>a;
    if (n%a!=0)
    {
        x=(n/a)+1;
        
        
    }
    else{
        x=n/a;
    }   
    if (m%a!=0)
    {
        y=(m/a)+1;
         
        
    }
    else{
        y=m/a;

    }    
    
   cout<<x*y<<endl;
    
    

    
    
    

    
}