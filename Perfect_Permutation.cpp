#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100+1];

    if (n%2!=0)
    {
        cout<<"-1";
        
        
    }
    
    else
    {
        for (int i =1; i <=n; i++)
    {
        arr[i]=i;
        
    }


    for (int i =1; i <n; i=i+2)
    {
        swap(arr[i],arr[i+1]);

        
    }

    /* if (n%2!=0)
    {
         swap(arr[n],arr[n-1]);
    } */


    for (int i = 1; i <=n; i++)
    {
        cout<<arr[i]<<" ";
        
    }



    }
    


    
}