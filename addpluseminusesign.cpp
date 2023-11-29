#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        for (int i =1; i < n; i++)
        {
            if(s[i]=='0'){
                cout<<"+";
            }
            else if (c%2!=0)
            {
                cout<<"+";
                c++;
            }
            else{
                cout<<"-";
                c++;
            }
            
        }
        cout<<endl;
        

    }
    
}