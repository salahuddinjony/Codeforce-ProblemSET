#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, minDi = INT_MAX, idx, size,flag=0;
    cin >> n;
    long long int A[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];

        if (minDi > A[i])
        {
            idx = i;
            minDi = A[i];
        }
        else if (minDi == A[i])
        {
            flag=1;
            
        }
    }
    if(flag==0){
        cout<<idx+1<<endl;
    }
    else{
        cout<<"Still Rozdil"<<endl;
    }
    

    return 0;
}