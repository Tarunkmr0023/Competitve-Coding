#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string temp="";
    unordered_map<string,int> m;
    int count=0;
   	for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            m[temp]++;
            temp="";
        }
        else
        {
            temp+=s[i];
        }
        if(i==s.length()-1)
        {
            m[temp]++;
        }
    }
    for(auto i=m.begin();i!=m.end();i++)
    {
        if(i->second>=2)
        {
            cout<<i->first<<" "<<i->second<<endl;
            count++;
        }
    }
    if(count==0)
    {
        cout<<"-1"<<endl;
    }
    return 0;
}
