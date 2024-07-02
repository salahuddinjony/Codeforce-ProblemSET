#include<iostream>
using namespace std;
int main(){
    long long int n,function;
    cin>>n;
   
       if (n%2==0)
       {
           cout<<n/2<<endl;
       }
       else{
           function=-(n/2+1);
            cout<<function<<endl;
       }
   
    
}