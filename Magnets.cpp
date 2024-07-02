#include<iostream>
using namespace std;
int main(){

    int n,count=0;
    cin>>n;
    int s[n];
    for (int i = 0; i <n; i++)
    {
        cin>>s[i];
        
    }
    for (int j = 0; j <n; j++)
    {
        if (s[j]!=s[j+1])
        {
            count++;
        }

    }
    cout<<count<<endl;
    
    

}