#include<bits/stdc++.h>
using namespace std;
int main(){
   
    int a;
    cin>>a;
    while (a--)
    {
        string s;
        cin>>s;
        int A=0,B=0;
        for (int i = 0; i <5; i++)
        {
            if(s[i]=='A'){
                A++;
            }
            else{
                B++;
            }
        }
        if(A>B){
            cout<<"A"<<endl;
        }else{
            cout<<"B"<<endl;
        }
        
        
    }
    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/