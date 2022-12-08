#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t,n;
    string s;
    cin>>t;
    while (t--)
    {
        cin>>n;
        cin>>s;
       sort(s.begin(),s.end());
       if (s=="Timru") 
       {
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
         
    }
    return 0;
}



//Best solution

/* #include<bits/stdc++.h>
using namespace std;
int main() {
	int t,n;
    cin>>t;
    string s;
	while(t--){
	    cin>>n>>s;
		sort(s.begin(),s.end());
		cout<<(s=="Timru"?"YES":"NO")<<endl;
	}
} */