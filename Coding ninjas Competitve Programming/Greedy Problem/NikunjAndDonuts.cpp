#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b)
{
    return a>b;
}
int main()
{
    //Write your code here
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,comp);
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=pow(2,i)*a[i];
    }
    cout<<sum<<endl;
    return 0;
}