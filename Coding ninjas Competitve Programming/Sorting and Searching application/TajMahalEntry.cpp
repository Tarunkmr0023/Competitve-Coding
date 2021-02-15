#include<bits/stdc++.h>
using namespace std;
long long binarySearch(long long a[],int s,int e,int i)
{
    long long ans=-1;
    while(s<=e)
    {
        long long mid=(s+e)/2;
        if((i+mid*e)>=a[i])
        {
            ans=mid;
	    e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}
int main()
{
    long long n;
    cin>>n;
    long long window[n];
    long long value[n];
    for(int i=0;i<n;i++)
    {
        cin>>window[i];
    }
    long long min=0;
   	for(int i=0;i<n;i++)
    {
       long long t=binarySearch(window,0,n,i);
       value[i]= i+t*n;
        if(value[min]>value[i])
        {
            min=i;
        }
    }
    cout<<min+1<<endl;
   	
	return 0;
}