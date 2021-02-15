#include<iostream>
using namespace std;
void helper(int maze[][20],int i,int j, int n,int** sol)
{
    if(i==n-1 && j==n-1)
    {
        sol[i][j]=1;
      	 for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<sol[i][j]<<" ";
            }
        }
     	cout<<endl;
        sol[i][j]=0;
        return;
    }
    if(i<0 || j<0 || i>=n || j>=n || maze[i][j]==0 || sol[i][j]==1)
    {
        return;
    }
    sol[i][j]=1;
   	helper(maze,i-1,j,n,sol);
    helper(maze,i+1,j,n,sol);
    helper(maze,i,j-1,n,sol);
    helper(maze,i,j+1,n,sol);
    sol[i][j]=0;
        
}

void ratInAMaze(int maze[][20], int n){
    int** sol = new int*[n];
  for(int i=0;i<n;i++){
  	sol[i] = new int[n];
  }
	helper(maze,0,0,n,sol);	
}


int main(){

  int n; 
  cin >> n ;
  int maze[20][20];
  for(int i = 0; i < n ;i++){
	for(int j = 0; j < n; j++){
        	cin >> maze[i][j];
        }		
  }
  ratInAMaze(maze, n);
}


