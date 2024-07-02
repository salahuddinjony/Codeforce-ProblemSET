#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    for (int i = 0; i <n; i++)
    {
        if(A[i]%3==0){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }
    }
    
    

return 0;
    
}