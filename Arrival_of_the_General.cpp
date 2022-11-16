#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int solders[n],ma=0,mi=101,maxi,mini;
    for (int i =0; i <n; i++)
    {
        cin>>solders[i];

        if (solders[i]>ma) 
        {
            ma=solders[i];
            maxi=i;
        }
        if (solders[i]<=mi)
        {
            mi=solders[i];
            mini=i;
        }
        
        
       
    }
    if (maxi>mini)
    {
        mini++;
    }
    
    cout<<maxi+(n-1)-mini<<endl;


    
}