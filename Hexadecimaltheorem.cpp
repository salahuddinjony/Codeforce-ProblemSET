#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << "0 0 " << n << endl;

    return 0;
}

/* **************Runtime out **********
#include <bits/stdc++.h> using namespace std; int fibo(int n){     if(n==0){         return 0;     }
             else if (n == 1 or n == 2)
{
    return 1;
}
else
{
    return fibo(n - 1) + fibo(n - 2);
}
}
int main()
{
    long long int n;
    cin >> n;
    int A[n], idx;
    for (int i = 0; i < n; i++)
    {
        if (fibo(i) > n)
        {

            break;
        }
        else
        {
            idx = i;
            A[i] = fibo(i);
        }
    }
    if (n >= 8)
    {
        cout << A[idx - 2] << " " << A[idx - 2] << " " << A[idx - 3] << endl;
    }
    else if (n == 5)
    {
        cout << A[idx - 2] << " " << A[idx - 1] << " " << A[idx - 1] << endl;
    }
    else if (n == 3)
    {
        cout << A[idx - 1] << " " << A[idx - 1] << " " << A[idx - 1] << endl;
    }

    else if (n == 2)
    {
        cout << A[idx - 1] << " " << A[idx - 2] << " " << A[idx - 2] << endl;
    }
    else if (n == 1)
    {
        cout << 0 << " " << 0 << " " << A[idx - 1] << endl;
    }
    else if (n == 0)
    {
        cout << 0 << " " << 0 << " " << 0 << endl;
    }
    else
    {
        cout << "I'm too stupid to solve this problem" << endl;
    }

    return 0;
} */