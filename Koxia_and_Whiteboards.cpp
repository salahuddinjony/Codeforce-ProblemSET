#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main(){

	int t;
	cin>>t;
	
	while(t--){
	
	    int n,m;
	    cin>>n>>m;
	    int a[n],b[m];
	    int sum=0;
	    for(int i=0;i<n;i++){
	    	cin>>a[i];
	    	sum+=a[i];
		}
		for(int i=0;i<m;i++){
	    	cin>>b[i];
		}
		sort(a,a+n);
		for(int i=0;i<m;i++){
	    		sum=sum-a[0]+b[i];
	    		a[0]=b[i];
	    		sort(a,a+n);
		}
		
		
		cout<<sum<<endl;
	}

}