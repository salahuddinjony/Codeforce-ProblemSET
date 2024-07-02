#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,l,r,l1=0,r1=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>l>>r;
	    l1+=l;
	    r1+=r;
	}
	cout<<(min(l1,n-l1)+min(r1,n-r1));
 
	return 0;
}
