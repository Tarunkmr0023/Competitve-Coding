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
    int odd_sum=0;
    int even_sum=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(a[i]%2==0)
            {
                even_sum+=a[i];
            }
        }
        else
        {
            if(a[i]%2==1)
            {
                odd_sum+=a[i];
            }
        }
    }
    cout<<even_sum<<" "<<odd_sum;
	return 0;
}
