#include<iostream>
#include<string.h>
using namespace std;
int main(){

    int n;
     string str;
    cin>>n;
    while (n--) //Test case
    {
        cin>>str;
        if (str.length()>10)
        {
            cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl; //string index count from 0 that's why str.length()-1
        }
        else
        cout<<str<<endl;
        
    }
    
   
}