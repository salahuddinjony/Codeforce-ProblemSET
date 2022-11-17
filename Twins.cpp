#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int a ,sum=0,sum2=0,count=0;
    cin>>a;
    int A[a];
    for (int i = 0; i <a; i++)
    {
        cin>>A[i];
        sum+=A[i];

    }
    sum=sum/2;

    sort(A,A+a,greater<int>());  ///array decending order sorted 
    for (int i=0; i<a; i++)
    {
        sum2+=A[i];
        count++;
        if (sum2>sum)
        {
            break;
        }
        
    }
    cout<<count<<endl;
    
    
}