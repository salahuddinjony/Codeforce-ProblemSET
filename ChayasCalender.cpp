#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int sum=0;
        for (int i = 1; i <=n; i++)
        {
            int a;
            cin>>a;
            sum++;
            if(sum%a){
                sum=((sum/a)+1)*a;
            }
        
        }
        cout<<sum<<endl;
        
    }
    return 0;
}
/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/