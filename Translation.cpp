#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
      int n=s.length()-1;
    
    for (int i = 0; i <=n; i++)  
    {
        swap(s[i],s[n]);
        n=n-1;
        
    }
    
    if (s==t)
    {
       cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
}