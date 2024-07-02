#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char A[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> A[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)

            {
                if (A[i][j] == '1')
                {
                    if (A[i][j - 1] == '0' and A[i][j + 1] == '0')
                    {
                        cout << "TRIANGLE" << endl;
                        i = n;
                        j = n;
                        break;
                    }

                    else if (A[i + 1][j] == '1' and A[i + 1][j + 1] == '1')
                    {

                        cout << "SQUARE" << endl;
                        i = n;
                        j = n;
                        break;
                    }

                    else
                    {
                        cout << "TRIANGLE" << endl;
                        i = n;
                        j = n;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
/*
 Author : SALAH
"HARD WORK CAN CHANGE LUCK"
*/