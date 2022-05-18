#include<iostream>
using namespace std;
int main(){

    int t,rem,z,add1=0,add2=0;
    z=0;
    cout<<"Enter your six digit: ";
    cin>>t;
    while (t!=0)
    {
           rem=t%10;
    t/=10;
    z++;
    
    if(z<=3){
        add1+=rem;
        

       
    }else{
        add2+=rem;
    
    }
    }
    if (add1==add2)
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    

}
