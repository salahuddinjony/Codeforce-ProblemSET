// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int A[n];
//     int MinS = 100000, s;
//     int idx1, idx2;
//     for (int i = 1; i <=n; i++)
//     {
//         cin >> A[i];
//     }

//     if(n==2){
//         cout<<1<<" "<<2<<endl;
//     }
//     else{
//         for (int i = 1; i <= n; i++)
//     {
//         s = abs(A[i] - A[i+1]);
//         if (MinS > s)
//         {
//             MinS = s;
//             idx1 = i;
//             idx2 = i + 1;
//         }
//         else if (i ==n)
//         {
//             s = abs(A[i] - A[1]);
//             if (MinS > s)
//             {
//                 idx1 = i;
//                 idx2 =1;
//             }
//         }
//     }
//     cout << idx1 << " " << idx2 << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int x = 1, y = n, mi;
    mi = abs(a[0] - a[n - 1]);
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(a[i + 1] - a[i]) < mi)
        {
            mi = abs(a[i + 1] - a[i]);
            x = i + 2;
            y = i + 1;
        }
    }
    cout << y << " " << x;
}
