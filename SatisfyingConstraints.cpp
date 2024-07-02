#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,k,a,x,val;
        cin>>n;
        long long arr[n];
        for (int i =0; i <n; i++)
        {
            cin>>a>>x;
            
            arr[i]=x;
        }
        val=*max_element (arr, arr+(n-1));
        k=val-1;
        int flag=0;
        for (int i = 0; i <n; i++)
        {
            if(arr[i]==k){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<k<<endl;
        }
        else{
            cout<<0<<endl;
        }

        

        
        
    }
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/