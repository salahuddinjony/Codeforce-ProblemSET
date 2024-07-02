#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){

    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='H'||s[i]=='Q'|| s[i]=='9'){ 

            cout<<"YES";
            return 0;
            }
 
    }
    cout<<"NO";
	
}




    /* char c;
	while(cin >> c){
		if(c=='H'||c=='Q'||c=='9'){
            cout << "YES";
        return 0;
        }
	}
	cout << "NO"; */