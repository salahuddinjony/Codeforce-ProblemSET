#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,k=0,mx=0;
    cin>>n;
    int arr[n];
    for (int i =1; i <=n; i++)
    {
        cin>>arr[i];
        if(arr[i]>=arr[i-1]){ //2 2 1 3 4 1
            k++;
        }
        else{
             k=1;
        }
        mx=max(mx,k);
       
       
    }
    cout<<mx<<endl;
    
    
}