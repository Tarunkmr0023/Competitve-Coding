#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll a[],ll n,ll mid,ll k)
{
    ll count=0;
    for(ll i=0;i<n;i++)
    {
        count += a[i]/mid;
    }
    
    if(count>=k)
        return true;
    else
        return false;
}

ll binarySearch(ll a[],ll s,ll e,ll k,ll n)
{
    ll ans=0;
    while(s<=e)
    {
        ll mid=(s+e)/2;
        if(check(a,n,mid,k)==false)
        {
            e=mid-1;
        }
        else
        {
            ans=mid;
            s=mid+1;
        }       
    }
    return ans;
}

int main() {
	int t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll k;
        cin>>n>>k;
        ll box[n];
        ll max=0;
        for(ll i=0;i<n;i++)
        {
            cin>>box[i];
        }
        sort(box,box+n);
        max = box[n-1];
        cout<<binarySearch(box,0,max,k,n)<<endl;
    }
}