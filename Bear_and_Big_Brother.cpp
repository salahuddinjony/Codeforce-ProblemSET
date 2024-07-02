#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int limak,bob,year=0;
    cin>>limak>>bob;
        while(limak<=bob)
        {
            limak*=3;//6
            bob*=2;//6
            year++;
            
        }
    cout<<year<<endl;  
}