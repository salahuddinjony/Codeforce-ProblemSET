#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main(){
    int x;
    string s[5][5];
    for (int i = 0; i <5 ; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>s[i] [j];
             if (s[i][j]=="1")
            {
                x=abs(2-i)+abs(2-j);
                  
            }    
        }
        
    }

   /*  for (int i = 0; i <5 ; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (s[i][j]=="1")
            {
                x=abs(2-i)+abs(2-j);
                  
            }    
        }
        
    } */
    cout<<x<<endl;  
}