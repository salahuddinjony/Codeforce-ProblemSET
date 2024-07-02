#include<iostream>
using namespace std;
int main(){
    int n,m,i,num,z=0,prime;
    cin>>n>>m;

      for (num=n+1; ; num++) //7 9
      {
        for ( i =2; i <num; i++)
        {
            if (num%i==0)
            {
                break;
                
            }
            
        }
        if (num==i)
        {
            if (num==m)
            {
                cout<<"YES"<<endl;
                break;
            }
            else{
                cout<<"NO"<<endl;
                 break;
                
            }
            
        }
        
        
        
        
      }
      
        
   
    
}