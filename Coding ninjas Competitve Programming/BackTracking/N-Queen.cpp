#include<iostream>
using namespace std;
bool isSafeToPut(int sol[][10],int i,int j,int n)
{
    for(int k=0;k<n;k++)
    {
        if(sol[k][j] || sol[i][k])
        {
            return false;
        }
    }
    
    int row=i,col=j;
    while(row>=0 && col>=0)
    {
        if(sol[row][col])
        {
            return false;
        }
        row--;
        col--;
    }
    row=i,col=j;
    while(row>=0 && col<n)
    {
        if(sol[row][col])
        {
            return false;
        }
        row--;
        col++;
    }
    
    return true;
    
}

bool helper(int sol[][10],int i,int n)
{
    if(i==n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<sol[i][j]<<" ";
            }
        }
        cout<<endl;
        return false;
    }
    
    for(int j=0;j<n;j++)
    {
        if(isSafeToPut(sol,i,j,n))
        {
            sol[i][j]=1;
            bool nextAns=helper(sol,i+1,n);
            if(nextAns)
            {
                return true;
            }
            sol[i][j]=0;
        }
    }
    return false;
    
}

void placeNQueens(int n){
    int sol[10][10]={0};
	helper(sol,0,n);
    return;
}


int main(){

  int n; 
  cin >> n ;
  placeNQueens(n);

}


