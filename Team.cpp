#include<iostream>
using namespace std;
int main(){

    int n,a,b,c,z=0;
    cin>>n;

    
    while (n--)

    {
        cin>>a>>b>>c;
        if ((a==1 && b==1) || (a==1 && c==1) || (b==1 && c==1) )
        {
            z++;
        }

        
    }
    cout<<z<<endl;
    
}