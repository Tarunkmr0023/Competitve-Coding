#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b)
{
    return a>b;
}
int main() {

	// Write your code here
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
       
    }
     sort(a,a+n,comp);
    for(int i=0;i<n;i++)
    {
        if(a[i+1]+a[i+2]>=a[i])
        {
            cout<<a[i+2]<<" "<<a[i+1]<<" "<<a[i];
            return 0;
        }
    }
    cout<<-1;
    return 0;
}