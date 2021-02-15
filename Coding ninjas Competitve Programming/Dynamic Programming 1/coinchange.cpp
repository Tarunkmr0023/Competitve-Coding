int helper(int n,int d[],int nd,int** output)
{
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        return 0;
    }
    if(nd==0)
    {
        return 0;
    }
    if(output[n][nd]>-1)
    {
        return output[n][nd];
    }
    int first=helper(n-d[0],d,nd,output);
    int second=helper(n,d+1,nd-1,output);
    output[n][nd]=first+second;
    return first+second;
}
int countWaysToMakeChange(int denominations[], int numDenominations, int value){

  	int** output=new int*[value+1];
    for(int i=0;i<=value;i++)
    {
        output[i]=new int[numDenominations+1];
    }
    for(int i=0;i<=value;i++)
    {
        for(int j=0;j<=numDenominations;j++)
        {
            output[i][j]=-1;
        }
    }
	int ans= helper(value,denominations,numDenominations,output);
	return ans;
}
