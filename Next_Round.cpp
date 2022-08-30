#include<iostream>
using namespace std;
int main(){
    int n,k,count=0;
    cin>>n>>k;
    int x[n];
    for (int i = 0; i <n; i++)
    {
       cin>>x[i];
    }

    //why we cant use one 'for loop' for this condition?
    
    for (int i =0; i<n; i++)
    {
        
        if (x[i]>0 && x[k-1]<=x[i])
        {
            count++;
        }
        
    }
    cout<<count<<endl;
    
}