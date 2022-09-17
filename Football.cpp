#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int count=0;
    string s;
    cin>>s;
    for (int i = 0; i <s.length(); i++)
    {
        
        if (s[i]==s[i+1])
        {
            count++;
        }
       else if (count<6)
       {
           count=0;
       }
       
        
    }
    if (count>=6)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}