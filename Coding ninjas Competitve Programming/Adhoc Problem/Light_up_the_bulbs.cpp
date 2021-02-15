#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,x,y;
    string str;
    cin>>n>>x>>y;
    cin>>str;
    long groups=0;
    for(int i=0;i<str.length()-1;i++)
    {
        if(str[i]=='1'&& str[i+1]=='0')
        {
            groups++;
        }
    }
    if(str[0]=='0')
    {
        groups++;
    }
    //cout<<count<<endl;
    long ans=0;
    if(groups>0)
    {
     ans=((groups-1)*min(x,y))+y;   
    }
    cout<<ans<<endl;
	return 0;
}
