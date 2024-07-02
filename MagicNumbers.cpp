#include <iostream>
using namespace std ;
int main()
{
	int x=0;
	string a;
	cin>>a;
	for(int i=0 ;i<a.length() ; i++)
	{
		if(a[i] != '1' && a[i] != '4')
		x++;
		if(a[0]=='4')
		x++;
		if(a[i]=='4' && a[i+1]=='4' && a[i+2]=='4')
		x++;
	}
	if(x>0)
	cout<<"NO";
	else
	cout<<"YES";
}
		