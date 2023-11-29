#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;int x[n],y[n];int sum=0;
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];		
	}
	int left,right,lower,upper;
	for(int i=0;i<n;i++){
		left=right=upper=lower=0;
		for(int j=0;j<n;j++){
			if(x[j]==x[i]){
				if(y[j]>y[i])
					upper++;
				if(y[j]<y[i])
					lower++;
			}
			if(y[j]==y[i]){
				if(x[j]>x[i])
					right++;
				if(x[j]<x[i])
					left++;
			}
		}
		if(left>0&&right>0&&upper>0&&lower>0)
			sum++;
	}
	cout<<sum;
}
 