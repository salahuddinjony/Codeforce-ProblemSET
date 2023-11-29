#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    set<char>st;
    for (int i = 0; i <n; i++)
    {
        char s=tolower(a[i]);
        st.insert(s);
    }
    if(st.size()==26){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    


return 0;
    
}