#include <iostream>

using namespace std;

int main(void)
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		long long prod = 1;
		int temp = n;
		while (temp--)
		{
			int num;
			cin >> num;
			prod *= num;
		}

		int mod = 2023 % prod;
		if (mod != 0)
		{
			cout << "NO\n";
			continue;
		}
		cout << "YES\n";
		cout << 2023 / prod;
		k--;
		while (k--)
		{
			cout << " 1";
		}
		cout << endl;
	}

	return 0;
}