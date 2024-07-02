#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, minDi = INT_MAX, idx, size,flag=0;
    cin >> n;
    long long int A[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];

        if (minDi > A[i])
        {
            idx = i;
            minDi = A[i];
        }
       
    }
   for (int i = 0; i <n; i++)
   {
    if(A[i]==minDi and i!=idx){ 
        flag=1;
        break;
    }
   }
   if(flag==0){
    cout<<idx+1<<endl;
   }
   else{
    cout<<"Still Rozdil"<<endl;
   }
   
    

    return 0;
}






// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//   long long n,k,x,min=10000000001;
// cin>>n;
// map<int,int>m;
// for(int i=1;i<=n;i++){
//     cin>>x;
//     m[x]++;
//     if(x<min){
//         min=x;
//         k=i;
//     }
// }
//   if(m[min]>1){
//       cout<<"Still Rozdil";
//   } 
//   else{
//       cout<<k;
//   }
//    return 0;
// }