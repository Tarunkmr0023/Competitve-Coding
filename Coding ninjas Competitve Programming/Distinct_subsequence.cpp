#include<bits/stdc++.h>
using namespace std;

#define MAX 1000000007

int count(string s)
{
    int n=s.length();
    int *dp=new int[n+1];
    dp[0]=1;
    vector<int> last(256,-1);
    for(int i=1;i<=n;i++)
    {
        dp[i]=(2%MAX*dp[i-1]%MAX)%MAX;
        
        if(last[s[i-1]]!=-1)
        {
            dp[i]=(dp[i]%MAX - dp[last[s[i-1]]]%MAX + MAX)%MAX;
        }
        
        last[s[i-1]]=i-1;
    }
    return dp[n];
}
int main() {

	// Write your code here
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ans=count(s);
        cout<<ans<<endl;
    }
}