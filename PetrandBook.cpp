#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int A[7];
    cin >> n;
    for (int i = 0; i < 7; i++)
    {
        cin >> A[i];
    }
    int pages = 0;
    bool flag=true;
    for (;;){

    for (int i=0; i < 7; i++)
    {
        pages += A[i];

        if (pages >= n)
        {
            cout << i + 1 << endl;
            flag=false;
            break;
        }
        
        } 
        if(flag==0){
            break;
        }

        
    
    }
return 0;
}






// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, p = 0, i, s = 0, j, l, m, f, kib, a[7];

//     cin >> n;
//     for (i = 0; i < 7; ++i)
//     {
//         cin >> a[i];
//     }

//     for (i = 0; i < 7; i = i)
//     {
//         s = s + a[i];
//         if (s >= n)
//         {
//             cout << i + 1;
//             break;
//         }
//         if (i == 6)
//         {
//             i = 0;
//         }
//         else
//         {
//             ++i;
//         }
//     }
// }
