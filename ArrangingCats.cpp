#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	string s,f;
    /*
    10010
    00001 
    */
	cin>>s>>f;
	int n1=0,n2=0,count=0;
	for(int i=0;i<n;i++){
	    if(s[i]!=f[i]){
	    count++;
	    if(s[i]=='1')n1++;
	    if(f[i]=='1')n2++;
	    }
	}
	cout<<count-min(n1,n2)<<endl;
	}
	return 0;
}