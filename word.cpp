#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,s1;
    int upper=0,lower=0;
    cin>>s;
    for (int i = 0; i <s.size(); i++)
    {
        int x=strcmp(s);

        if (s[i] <=90 && s[i]>=65)
        {
        upper++;
        }
        else if ((s[i] >=97 && s[i]<=122))
        {
            lower++;
        }
        
    }
    if (upper>lower)
    {
        for (int i = 0; i <s.size(); i++)
        {
           putchar(toupper(s[i])); //print out the charater for use putchar() function
        }
            
    }
    else{
        for (int i = 0; i <s.size(); i++)
        {
            putchar(tolower(s[i]));
        }
    }
        
    
    
    
    
}