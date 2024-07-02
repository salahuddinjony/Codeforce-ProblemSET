#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string c;
        cin>>c;
        int coins=0;
        for (int i = 0; i <n; i++)
        {
            if(c[i]=='*' and c[i+1]=='*'){
               break;
            }else{
                if(c[i]=='@')
                 coins++;
            }
        }
        cout<<coins<<endl;
        
        
    }
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/