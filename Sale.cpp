#include<iostream>
#include<algorithm>
using namespace std;
int main(){
     int n,m,money=0;
    cin>>n>>m;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }

   /* int k = sizeof(arr) / sizeof(arr[0]); */
    sort(arr, arr + n); //sort the array to ascending

    for (int j = 0; j <m; j++)
    {
        if (arr[j]<=0)
        {
           money+=abs(arr[j]);
        }
        
       
    }
    
    cout<<money<<endl;
    

    
   
    

}