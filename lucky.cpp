#include<iostream>
using namespace std;

int main(){

    int t,s,rem,z,add1=0,add2=0;
    z=0;

    cin>>t;

    while (t)
    {
        cin>>s;
        t--;

         
    while (s)
    {
    rem=s%10;
    s/=10;
    z++;
    
    if(z<=3){
        add1+=rem;
        

       
    }else{
        add2+=rem;
    
    }
    }
    if (add1==add2)
    {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    }
   
    

}
