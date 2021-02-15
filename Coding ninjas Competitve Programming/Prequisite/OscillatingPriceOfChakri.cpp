#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=0;
    int diff;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            diff=a[j]-a[i];
            if(diff>max)
            {
                max=diff;
            }
        }
    }
    cout<<max<<endl;
    return 0;
}
