#include<iostream>
using namespace std;
int main(){
    int n,k,data;
    cin>>n>>k;
    while (k)
    {
        data=n%10;
        if (data==0)
        {
            n/=10;
        }
        else{
            n-=1;
        }
        
        k--;
    }
    cout<<n<<endl;
    
}