#include<algorithm>
using namespace std;
int minAbsoluteDiff(int arr[], int n) {
   sort(arr,arr+n);
    int ans=1e9;
    for(int i=1;i<n;i++)
    {
        int diff=arr[i]-arr[i-1];
        if(diff<ans)
        {
            ans=diff;
        }
    }
    return ans;
}