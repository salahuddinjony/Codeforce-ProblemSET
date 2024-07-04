#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>s;
    for (int i = 0; i <n; i++)
    {
        int a;
        cin>>a;
        s.insert(a);
    }
    if(s.size()!=1) cout<<*(++s.begin())<<endl;
    else cout<<"NO"<<endl;
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/