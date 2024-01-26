#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int len=s.size(),lw=0,up=0;

    if(s[0]>='a' and s[0]<='z'){

        for (int i = 0; i <len; i++)
        {
           if(s[i]>='a' and s[i]<='z')
            lw++;
        }
    }
    

    for (int i = 0; i <len; i++)
    {
        if(s[i]>='A' and s[i]<='Z'){
            up++;
        }
    }

    if(lw==1){
        s[0]=toupper(s[0]);
        for (int i = 1; i <len; i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s; 
    }
    else if (up==len)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        cout<<s;
        
    }
    else{
        cout<<s<<endl;
    }
    
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/