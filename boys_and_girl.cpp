#include<iostream>
#include<string>
#include<algorithm> //for sorting
using namespace std;
int main(){
    int count=0;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    /* cout<<s<<endl; */
    for (int i = 0; i <s.size(); i++)

    {
        if (s[i]!=s[i+1])
        {
            count++;
            //cout<<count<<endl;
        }
        
    }
    /* cout<<count<<endl;
    cout<<s.size()<<endl; */
    if (count%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{

        cout<<"IGNORE HIM!"<<endl;

    }
    
    
    
}