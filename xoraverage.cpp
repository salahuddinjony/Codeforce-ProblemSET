#include<bits/stdc++.h>
using namespace std;

void slove(){
    int  n;
    cin>>n;
    if(n==1){cout<<69<<" "<<endl;}
   else if(n==2){
        cout<<3<<" "<<1<<endl;
    }
    else
    {

        if(n%2==1){
        for(int i=1;i<=n;i++){
            cout<<n<<" ";
        }
            cout<<endl;
    }
    else
    {
        cout<<3<<" "<<1<<" ";
        int z=((n*2)-4)/2;
        for(int i=1;i<=z;i++){
                cout<<2<<" ";

        }
    }
    cout<<endl;
    }
    }

int main(){
    int tes;
    cin>>tes;
    while(tes--){
        slove();
    }
}