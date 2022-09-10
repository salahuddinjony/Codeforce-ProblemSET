#include<iostream>
using namespace std;
int main(){

    int k,n,w,borrow=0;
    cin>>k>>n>>w;
    for (int i = 1; i <=w; i++)
    {
        borrow+=k*i;
    }
   if (n<borrow)
   {
        cout<<borrow-n<<endl;
   }
   else{
       cout<<"0"<<endl;
   }
   
    


}