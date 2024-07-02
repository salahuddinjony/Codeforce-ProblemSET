#include<iostream>
using namespace std;
int light(int n){		//function to convert 1 to 0 and 0 to 1
	if(n==0){
    	return 1;
	}
	return 0;
}

int main(){
    
    int grid[3][3];
    int initallight[3][3];
    
    for (int i = 0; i <3; i++)    //input array in grid
    {
      for (int j = 0; j <3; j++)
      {
        cin>>grid[i][j];
        if (grid[i][j]%2==0)
        {
            grid[i][j]=0;
        }
        else{
            grid[i][j]=1;

        }
        initallight[i][j]=1;
          
      }
       


      
    }

    for (int i = 0; i <3; i++)
    {
      for (int j = 0; j <3; j++)
      {
          if(grid[i][j]==1){		//for odd input light status will change
            	initallight[i][j] =light(initallight[i][j]);			//changing light status
            	if(i>0){
                	initallight[i-1][j] =light(initallight[i-1][j]);		//changing light status
            	}
            	if(j>0){
                	initallight[i][j-1] =light(initallight[i][j-1]);		//changing light status
            	}
            	if(i<2){
                	initallight[i+1][j] = light(initallight[i+1][j]);		//changing light status
            	}
            	if(j<2){
                	initallight[i][j+1] = light(initallight[i][j+1]);	//changing light status
            	}
           	 
           	 
        	}
        
         
      }
      
      
      
    }
     for(int i=0; i<3; i++){
    	for(int j=0; j<3; j++){
   	 
        	cout<<initallight[i][j];		//output
    	}
    	cout<<endl;
    }
    
   
    
}