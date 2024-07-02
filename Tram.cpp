 #include<iostream>
using namespace std;
int main(){

    int stop,a,b,max1=0,max=0;
    cin>>stop;
    
    
    for (int i = 1; i <=stop; i++)
    {
        cin>>a>>b;///a=0 b=3_1stcase:a=2 b=5 2nd        case:a=4 b=2  
        max1=max1-a;  //max1=0-0=0     //max1=3-2=1     //max1=6-4=2    
        max1=max1+b;  //max1=0+3=3     //max1=1+5=6     //max1=2+4=4
        if (max1>max) //3>0_T          //6>3_T          //6>3_T
        {
            max=max1; //max=3           //max=6         //max=6
        }

    }
     cout<<max<<endl; //6
    
    
    

} 
