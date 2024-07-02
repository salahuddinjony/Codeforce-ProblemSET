#include<iostream>
#include<string.h>
using namespace std;
int main(){

    int x=0,y=0;
    string s;
    cin>>s;
    string a="hello";
    for(int i=0;i<s.size();i++){
        if(5<=s.size()){
            
            if(s[i]==a[x]){
                x++;
                y++;
            }
            
        }
    }
    
    if(y>=5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
