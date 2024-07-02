#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    int mx=INT_MIN;
    for (int i = 0; i <n-1; i++)
    {
        
        for (int j =i+1; j <n; j++)
        {
            int cm=arr[i] & arr[j];
            mx=max(mx,cm);
  
        }
        
    }
    cout<<mx<<endl;
    
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/