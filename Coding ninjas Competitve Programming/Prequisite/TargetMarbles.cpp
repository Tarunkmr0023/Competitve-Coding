#include <iostream>
using namespace std;
void find(int a[],int n,int target)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {   sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=a[j];
            if(sum==target)
            {
                cout<<"true"<<endl;
                for(int k=i;k<=j;k++)
                {
                    cout<<a[k]<<" ";
                }
                return;
            }
        }
    }
    cout<<"false"<<endl;
    return;
}
int main() {
    int n, target;
    cin>>n>>target;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    find(a,n,target);
    return 0;
}
