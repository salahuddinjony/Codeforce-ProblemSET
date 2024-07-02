#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
int result[MAX];

int ans(int i){
    int ans=0;
    while (i)
    {
        ans+=i%10;
        i/=10;
    }
    return ans;  
}
int main()
{
    result[0]=0;
    for (int i =1; i <MAX; i++)
    {
        result[i]=result[i-1]+ans(i);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout<<result[n]<<endl;
        
    }
    return 0;
}

/*
 Author : SALAH
"HARD WORK CAN CHANGE LUCK"
*/