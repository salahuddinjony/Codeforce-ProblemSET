#include<iostream>
using namespace std;
int main(){

    int t,n;
    string s;
    cin>>t;
    while (t--)
    {
        cin>>n;
        cin>>s;
        if (n!=5)
        {
            cout<<"NO"<<endl;
            continue; 
        }
       sort(s.begin(),s.end());

       if (s=="Timru") 
       {
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
       
        
        

        
        
    }
    



    return 0;
}