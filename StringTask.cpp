#include<bits/stdc++.h>
using namespace std;
bool isvowels(char c){
    return (c=='a' || c=='e' || c=='o' || c=='u' || c=='y' || c=='i');
}
int main(){
    string s,ans;
    cin>>s;
    for(auto u: s){
        char c=tolower(u);

        if(!isvowels(c)){
            ans+='.';
            ans+=c;
        }
    }
    cout<<ans<<endl;
    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/

