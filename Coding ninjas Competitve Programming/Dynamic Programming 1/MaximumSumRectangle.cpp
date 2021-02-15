#include<bits/stdc++.h>
using namespace std;
int kadane(int a[], int n)
{
    int max_end_here = 0;
    int max_so_far = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max_end_here += a[i];
        if (max_end_here < a[i])
        {
            max_end_here = a[i];
        }
        if (max_so_far < max_end_here)
        {
            max_so_far = max_end_here;
        }
    }
    return max_so_far;
}
int main()
{
    int n,m;
    cin>>n>>m;
   	int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int max_sum=INT_MIN;
    for(int i=0;i<m;i++)
    {
        int *sum= new int[n]();
        for(int r=i;r<m;r++)
        {
            for(int j=0;j<m;j++)
            {
                sum[j]+=a[j][r];
            }
            int ans=kadane(sum,n);
            if(max_sum<ans)
            {
                max_sum=ans;
            }
        }
    }
    cout<<max_sum;
    return 0;
}