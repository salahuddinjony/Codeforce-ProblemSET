#include <bits/stdc++.h>
using namespace std;
int a[300030];
int main(){
	int T;
	cin >> T;
	while(T--){
		int n,x;
		cin >>n >>x;
		for(int i=1;i<=n;i++){    
            /* 5 3
            3 10 9 8 7 */

            cin >> a[i];
        }
         
		int mx=a[1],mn=a[1];
		int count=0;
		for(int i=2;i<=n;i++){

			mx=max(mx,a[i]);
            mn=min(mn,a[i]);
			if(mx-mn>2*x){
				count++;
				mx=mn=a[i];
			}
		}
		cout << count << endl; 
	}
}