#include<iostream>
using namespace std;
int main(){
    long long n;
    int data,count=0;
    cin>>n;
    while (n)
    {
        data=n%10;
        n/=10;
        if (data==4 || data==7)
        {
            count++;
        }
        
    }
    if (count==4 || count==7)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    
}