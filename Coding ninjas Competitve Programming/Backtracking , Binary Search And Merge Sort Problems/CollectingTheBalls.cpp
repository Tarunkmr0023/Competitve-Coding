#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll n,ll k)
{
    bool ans=false;
    ll sum=0;
    ll curr=n;
    while(curr>0)
    {
        sum+=min(curr,k);
        curr=curr-k;
        curr=curr-(curr/10);
    }
    if(2*sum>=n)
    {
        ans=true;
    }
    return ans;
}

ll findk(ll n)
{
    ll ans=0;
    ll s=0;
    ll e=n;
    while(s<=e)
    {
        ll mid=(s+e)/2;
        if(check(n,mid))
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
    ll n;
    cin>>n;
    ll ans=findk(n);
    cout<<ans<<endl;
	return 0;
}
