#include<bits/stdc++.h>
using namespace std;

string Caps(string s){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    s[0]-=32;    
    return s;
}

int main(){
    int c=0;
    string s;
    cin>>s;
    for(int i = 0; i <s.size(); i++){
        if(s[i]>=97){
            cout<<Caps(s); 
            c=1;
             
            break;
        }
       
    }
    if(c==0){

        cout<<s;

    }
    
    
}