#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n,t;
    string s;
    cin>>n>>t;
    cin>>s;
    for ( int i =1; i <=t; i++)
    {
        for (int j = 0; j <s.length()-1; j++)
        {
            if (s[j]=='B' && s[j+1]=='G')  // 5 1 BGGBG 

            {
                swap(s[j],s[j+1]);
                j++;
                
            }
           
            
            
            
            
        }
        
    }
    cout<<s<<endl;
    
}