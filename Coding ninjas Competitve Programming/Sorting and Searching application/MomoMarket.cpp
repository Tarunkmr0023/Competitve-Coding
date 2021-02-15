#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int binarySearch(ll price[],int n,ll save)
{
    int start=0;
    int end=n-1;
    if(price[start]>save)
    {
        return -1;
    }
    else if(price[end]<save)
    {
        return end;
    }
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(price[mid-1]<= save && save<price[mid])
        {
            return mid-1;
        }
        else if(price[mid]<save)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    ll price[n];
    for(int i=0;i<n;i++)
    {
       cin>>price[i];
    }
	int q;
    cin>>q;
    ll saving[q];
    for(int i=0;i<q;i++)
    {
        cin>>saving[i];
    }
   	ll sum=0;
    for(int i=0;i<n;i++)
    {
        price[i]+=sum;
        sum=price[i];
    }
    ll remains=0,count=0;
    for(int i=0;i<q;i++)
    {
        ll save=saving[i];
        int pos=binarySearch(price,n,save);
        remains=save-price[pos];
        count=pos+1;
        if(count==0)
        {
            remains=save;
        }
        cout<<count<<" "<<remains<<endl;
    }
    return 0;
}
