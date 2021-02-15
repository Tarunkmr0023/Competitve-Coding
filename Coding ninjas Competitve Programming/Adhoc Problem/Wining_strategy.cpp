#include<bits/stdc++.h>
using namespace std;
void solve(int a[],int n)
{
    int cost=0;
    for(int i=n-1;i>=0;i--)
    {
        int no=i+1;
     	if(a[i]!=no)
        {
            if(a[i-1]==no)
            {
                swap(a[i],a[i-1]);
                cost++;
            }
            else if(a[i-2]==no)
            {
                cost+=2;
                a[i-2]=a[i-1];
                a[i-1]=a[i];
                a[i]=no;
            }
            else
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
    cout<<cost<<endl;
    return;
}
int main() {

	int n;
    cin>>n;
    int* a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    solve(a,n);
}