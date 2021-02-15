#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll alpha_codes(ll n,ll * input,ll * arr)
{
    arr[0]=1;
    arr[1]=1;
    ll k=pow(10,9)+7;
    for(int i=2;i<n+1;i++)
    {
        if(input[i-1]!=0)
        {
            arr[i]=arr[i-1]%k;
        }
        if(input[i-2]>0 && (input[i-2]*10 + input[i-1])<=26)
        {
            arr[i]+=arr[i-2]%k;
        }
    }
    return arr[n]%k;
}
int main()
{
    string s;
    cin>>s;
    while(s!="0")
    {
        ll n=s.length();
        ll * arr=new ll[n+1]{};
        ll * input=new ll[n];
        for(int i=0;i<n;i++)
        {
            input[i]=s[i]-'0';
        }
        cout<<alpha_codes(n,input,arr)<<endl;
        cin>>s;
        delete [] arr;
        delete [] input;
    }
    return 0;
}