#include<iostream>
#include <iomanip>
#include <ios>
using namespace std;
int main(){
    int n,oranges;
    double k=0.0;
    cin>>n;
    for (int i =1; i <=n; i++)
    {
        cin>>oranges;
        k+=oranges;

    }
    cout<<fixed;
    cout<<setprecision(12)<<(double)k/n;
    
}