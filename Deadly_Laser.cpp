#include<iostream>
using namespace std;
int main(){
    long long t,n,m,x,y,d;
    cin>>t;
    while (t)
    {
        cin>>n>>m>>x>>y>>d;
        if ((x-d)<=1 and (x+d)>=n) //(left-right)
        {
            cout<<"-1"<<endl;
        }
        else if ((y-d)<=1 and (y+d)>=m) //top-bottom
        {
           cout<<"-1"<<endl;
        }
        else if ((x-d)<=1 and (y-d<=1)) //top-diagonal
        {
            cout<<"-1"<<endl;
        }
        else if ((x+d)>=n and (y+d)>=m) //bottom-diagonal
        {
            cout<<"-1"<<endl;
        }
        
        
        else{
            cout<<abs(n-1)+abs(m-1)<<endl;
        }

        t--;
    }
    
}