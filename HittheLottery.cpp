#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    while (n)
    {
        if(n>=100){
        
            count+=n/100;
             n%=100;
        }
        else if (n>=20)
        {
           
           count+=n/20;
            n%=20;
        }
          else if (n>=10)
        {
            
            count+=n/10;
            n%=10;
        }
        else if (n>=5)
        {
        
           count+=n/5;
            n%=5;
        }
        else{
            count+=n/1;
            n%=n;
        }
    
        
    }
    cout<<count<<endl;
    cout<<(n/100)+(n%100)/20+(n%20)/10+(n%10)/5+(n%5)<<endl;
    // cout << n/100+n%100/20+n%20/10+n%10/5+n%5<< endl;

    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/