#include<bits/stdc++.h>
using namespace std;
int main() {

	int n,k,l;
    cin>>n>>l>>k;
    int* a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int min_element=a[0],max_element=a[0];
    for(int i=0;i<n;i++)
    {
        min_element=min(min_element,a[i]);
        max_element=max(max_element,a[i]);
    }
    int ans=1e9;
    for(int i=min_element;i<=max_element;i++)
    {
        int dec=0,inc=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]<i)
            {
                inc+=i-a[j];
            }
            else if(a[j]>i)
            {
                dec+=a[j]-i;
            }
        }
        if(dec>inc)
        {
            continue;
        }
        else
        {
            ans=min(ans,dec*l+(inc-dec)*k);
        }
    }
    cout<<ans<<endl;
    return 0;
}