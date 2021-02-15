#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> p1,pair<int,int> p2)
{
    if((p1.second-p1.first)<(p2.second-p1.first))
    {
        return p1.first<p2.second;
    }
    return (p1.second-p1.first)<(p2.second-p1.first);
}
int main()
{
    //Write your code here
    int n;
    cin>>n;
    pair<int,int> p[n];
    int count=1;
    for(int i=0;i<n;i++)
    {
        int start,end;
        cin>>start>>end;
        p[i]=make_pair(start,end);
    }
    sort(p,p+n,compare);
    int prev=p[0].second;
    //cout<<p[0].first<<" "<<p[0].second<<endl;
    for(int i=1;i<n;i++)
    {
        //cout<<p[i].first<<" "<<p[i].second<<endl;
        if(p[i].first>=prev)
        {
            count++;
            //cout<<" Count increased"<<endl;
            prev=p[i].second;
        }
    }
    cout<<count<<endl;
    return 0;
}