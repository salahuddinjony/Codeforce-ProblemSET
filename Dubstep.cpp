#include<bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    string s;
    int x;
    cin>>s;
    for (int i =0; i<s.size(); i++) 
    {
        if( s[i]=='W' &&  s[i+1]=='U' && s[i+2]=='B'){
           
            i+=2;
            continue;
                 
        }
        else{
            cout<<s[i];
            if( s[i+1]=='W' &&  s[i+2]=='U' && s[i+3]=='B')cout<<" ";


        }

          
    }
    
    
    
}
//BEST solution

/* #include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
    cin>>s;
	regex r("WUB");
	cout<<regex_replace(s,r," ");
} */