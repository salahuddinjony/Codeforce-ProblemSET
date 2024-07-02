#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long int t,n,x,y;
    cin >> t;
    while(t--)
    {
        cin >> n;
        long long int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        
        sort(b,b+n);
        
        x = b[n-1];
        y = b[n-2];
        
        for(int i=0;i<n;i++)
        {
            if(a[i] == x)
            {
                cout << x - y << " ";
            }
            else {
                cout << a[i] - x << " ";
            }
        }
        cout << "\n";
        
    }
 
    return 0;


}



/* #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while (t--)
    {
        int n,mx,p,i;
        cin>>n;
        int arr[n];
        for (i = 0; i <n; i++)
        {
            cin>>arr[i];
            
        }

        for (i = 0; i <n; i++)
        {
            mx=0;
            p=arr[i];

           for (int j = 0; j <n; j++)
           {
               if(i==j){
                   
                   continue;
               }
                mx=max(mx,arr[j]);
           }
            cout<<p-mx<<" ";
            
            
           
           
           
        }
        cout<<endl;
        
        
      
    }
    
} */