#include<iostream>
using namespace std;
int main(){

    int a,n;
    cin>>a;

    if (a%7==0 or a%4==0 or a%47==0 or a%74==0)
    {
        cout<<"YES"<<endl;
    }
   else{
     while (a)
     {
         n=a%10;
         if (n==7 or n==4)
         {
             a=a/10;
         }
         else{
             cout<<"NO"<<endl;
             break;
         }
         
     }
     if (a==0)
     {
        cout<<"YES";
     }
     
     
   }
    
    
    
    
    
    


}