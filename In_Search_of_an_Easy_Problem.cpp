#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
        if (arr[i]=='1')
        {
            cout<<"HARD"<<endl;
            break;
        }
   
    }
    if (arr[n-1]=='0')
    {
        cout<<"EASY"<<endl;
    }
   
}


/* #include<iostream>

using namespace std;

int main()
{
    int a, count = 0;
    cin >> a;
    int ar[a];
    for(int i = 0; i < a; i++)
    {
        cin >> ar[i];
        if(ar[i] == 1)
        {
            count++;
        }
    }
    if(count == 0)
    {
        cout << "EASY";
    }
    else
    {
        cout << "HARD";
    }
} */