#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int cnt = 0;
    vector<int> v;
    for (int i = 0; i < 12; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    if (k == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        sort(v.begin(), v.end(), greater<int>());
        int grow = 0;
        for (auto u : v)
        {
            if (grow < k)
            {
                grow += u;
                cnt++;
            }
        }
        if (grow >= k)
        {
            cout << cnt << endl;
        }
        else
            cout << "-1";
    }

    return 0;
}

/*
 Author : SALAH
"HARD WORK CAN CHANGE LUCK"
*/