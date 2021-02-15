#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    int group=0;
    int left=0;
    for(int i=0;i<n/2;i++)
    {
        sum=a[i]+a[n-1-i];
        group=sum/10;
        left=sum%10;
        cout<<group<<" "<<left<<endl;
    }
    
	return 0;
}
