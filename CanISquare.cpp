#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long sum = 0,s=0, n, a;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a;
            sum += a;
        }
        s = sqrt(sum);
        if (s * s == sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}



/* #include<bits/stdc++.h>
using namespace std;
signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long sum=0;
		while(n--)
		{
			long long x;
			cin>>x;
			sum+=x;
		}
		long long s=sqrt(sum);
		if(s*s==sum) cout<<"YES"<<'\n';
		else cout<<"NO"<<'\n';
	}
	return 0;
} */