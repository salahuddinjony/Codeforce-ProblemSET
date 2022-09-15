#include<iostream>
#include<string.h>
using namespace std;
int main(){

    int y,a,b,c,d;
    cin>>y;
    for (int i = y+1;; i++)
    {
       a=i%10;//1001  1
       b=(i/10)%10;//100 0
       c=(i/100)%10; //10 0
       d=(i/1000)%10; //1 1
      
           if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
           {
           cout<<i<<endl;
           break;
           }
    }

}