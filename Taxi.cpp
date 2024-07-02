#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,g,t4=0,t3=0,t2=0,t1=0,t=0;
    cin>>n;
    while (n--)
    {
        cin>>g;
        if(g==4){
            t4++;
        }
        if(g==3){
            t3++;
        }
        if(g==2){
            t2++;
        }
        if(g==1){
            t1++;
        }  
    }
    t=t+t4;
    while(t1!=0 and t3!=0){  
        t3--;
        t1--;
        t++;
    }
    if(t1==0 and t3!=0){
        t+=t3;
        t3=0;
    }

    t+=t2/2;

    if(t2%2!=0){
        if(t1<=2){
            t=t+1;
            t1=0;
            t2=0;
        }
        else{
            t1=t1-2;
            t=t+1;
            t2=0;

        }
    }
    if(t1!=0){
        t+=t1/4;

        if(t1%4!=0){
            t=t+1;
        }
    }
    

    cout<<t;
}



//best solution:

/* #include<bits/stdc++.h>
using namespace std;
int x[5],n,i,t;
int main()
{
     cin>>n;
    while(n--) {
        cin>>t;
        x[t]++;
    }
    x[1]=max(x[1]-x[3],0);
     cout<<x[3]+x[4]+ceil((double)(x[1]+2*x[2])/4)<<endl;
    return 0;
}

 */