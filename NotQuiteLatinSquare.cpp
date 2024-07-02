
#include <iostream>
using namespace std;

int main()
{
    int t,x=int('A')+int('B')+int('C'),cnt=3,y;
    string a,b,c;
    char ans;
    cin>>t;
    while(t--){
        cnt=3;
       while(cnt--){
            cin>>a;
            y=int(a[0])+int(a[1])+int(a[2]);
       if(y!=x){
         cout<<char(x-y+int('?'))<<endl;
       }
      
       }
    }

    return 0;
}