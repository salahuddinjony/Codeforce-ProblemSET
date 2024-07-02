#include<bits/stdc++.h>
using namespace std;
bool isvowels(char c){
    return (c=='a' || c=='e' || c=='o' || c=='u' || c=='i');
}
int main(){
    vector<string>v;
    int cnt[]={5,7,5};
    for (int i = 0; i <3; i++)
    {
        string s;
        char c;
        cin>>c;
        getline(cin,s);
        s=c+s;
        v.push_back(s);
    }
    for (int i = 0; i < 3; i++)
    {
        int count=0;
        for(auto u: v[i]){
            if(isvowels(u)) count++;
        }
        if(count!=cnt[i]) return cout<<"NO\n", 0;
    }
    cout<<"YES\n";
    

    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/