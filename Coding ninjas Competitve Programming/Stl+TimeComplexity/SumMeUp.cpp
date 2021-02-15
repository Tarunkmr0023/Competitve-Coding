#include<bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        long sum=0;
        while(n)
        {
            sum=sum+(n%10);
            n=n/10;
        }
        cout<<sum<<endl;
    }
    return 0;
    }