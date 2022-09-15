#include<iostream>
using namespace std;
int main(){
    int h,a,width=0;
    cin>>a>>h;
    int arr[a];
    for (int  i = 0; i<a; i++)
    {
        cin>>arr[i];
        if (arr[i]>h)
        {
            width+=2;
            
        }
        else{
            width+=1;
        } 
    }
    cout<<width<<endl;
    

}