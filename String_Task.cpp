#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s,s1;
    cin>>s;

 /*    transform(s.begin(),s.end(),s.begin(), ::tolower); */
    for (int i = 0; i <s.length(); i++)
    {
       if (s[i]=='a' || s[i]=='e' || s[i]=='i'|| s[i]=='o' || s[i]=='u' || s[i]=='y'|| s[i]=='A' || s[i]=='E' || s[i]=='I'|| s[i]=='O' || s[i]=='U'|| s[i]=='Y')
       {
         /* s.erase(s.begin() + i); */
         continue;
       }   //s=salah  slh
       else{
           s1+='.'; //.       .s.    .s.l.
           s1+=tolower(s[i]); //s1=.s  .s.l  .s.l.h
       }
        
    }
    cout<<s1<<endl;
   
    

}