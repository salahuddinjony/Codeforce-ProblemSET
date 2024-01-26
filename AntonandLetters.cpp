#include<bits/stdc++.h>
using namespace std;
int main(){
	set<char>s;
	char c;
	while (c!='}')
	{
		cin>>c;
		if(c>='a' && c<='z'){
			s.insert(c);
		}
	}
	cout<<s.size()<<endl;
	


	return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/