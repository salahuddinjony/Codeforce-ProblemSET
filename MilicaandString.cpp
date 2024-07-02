#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, B = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                B++;
            }
        }
        if (B == k)
        {
            cout << 0 << endl;
        }
        else if (B < k)
        {
            int i = 0;
            for (; i < s.size(); i++)
            {
                if (s[i] == 'A' and B < k)
                {
                    B++;
                }
                else if (B == k)
                {
                    break;
                }
            }
            cout << 1 << endl
                 << i << " "
                 << "B" << endl;
        }
        else
        {
            int i = 0;
            for (; i < s.size(); i++)
            {
                if (s[i] == 'B' and B > k)
                {
                    B--;
                }
                else if (B == k)
                {
                    break;
                }
            }
            cout << 1 << endl
                 << i << " "
                 << "A" << endl;
        }
    }

    return 0;
}