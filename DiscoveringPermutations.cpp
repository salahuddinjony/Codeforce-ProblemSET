#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int MAX = 200007;
int result[MAX];
int main(){
    optimize();
    int t;
    cin>>t;
    for (int i = 1; i <=t; i++)
    {
        int n,k;
        string s="A";
        cin>>n>>k;
        for (int i =1; i <n; i++)
        {
            s+='A'+i;
        }
        int cnt=0;
    cout << "Case " << i << ":" << '\n';
       do
       {
       cout<<s<<endl;
       cnt++;
       if(cnt==k) break;;
       } while (next_permutation(s.begin(),s.end()));
       
        
        
    }
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    string all = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int t = 1; t <= test_case; t++)
    {
        int N, K;
        cin >> N >> K;
        string x, check;
        x = all.substr(0, N);
        check = x;
        cout << "Case " << t << ":" << '\n';
        for (int i = 1; i <= K; i++)
        {
            cout << x << '\n';
            next_permutation(x.begin(), x.end());
            if (x == check) break;
        }
    }

    return 0;
}
*/

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/