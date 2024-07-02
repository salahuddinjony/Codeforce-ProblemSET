#include<iostream>
using namespace std;
int main(){
    int  k,l,m,n,d,count=0;
    cin>>k>>l>>m>>n>>d;

    for (int i =1; i <=d; i++)
    {
        if (i%k!=0 and i%l!=0 and  i%m!=0  and i%n!=0)
        {
            count++;
        
        }
        
    }
    cout<<d-count<<endl;
    

    

}