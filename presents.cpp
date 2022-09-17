#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n]; 
    int temp[n];                 //2 3 4 1 input
    for (int  i =1; i <=n; i++)  //1 2 3 4 index
                                 //4 1 2 4
    {
        cin>>arr[i];
        temp[arr[i]]=i;
    }
    for (int j =1;j<=n; j++)
    {
        cout<<temp[j]<<" ";
    }
    
    
}