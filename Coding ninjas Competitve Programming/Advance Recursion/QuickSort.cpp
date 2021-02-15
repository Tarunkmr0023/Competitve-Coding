#include<iostream>
using namespace std;
#include<algorithm>
using namespace std;

int partition(int a[],int s,int e)
{
    int count=0;
    int p;
    for(int i=s+1;i<=e;i++)
    {
        if(a[i]<=a[s])
        {
            count++;
        }
    }
    p=s+count;
    swap(a[p],a[s]);
    int i=s;
    int j=e;
    while(i<p && j>p)
    {
        if(a[i]<=a[p])
        {
            i++;
        }
        else if(a[j]>a[p])
        {
            j--;
        }
        else
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    return p;
}

void helper(int a[],int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int p=partition(a,s,e);
    helper(a,s,p-1);
    helper(a,p+1,e);
}

void quickSort(int input[], int size) {
    helper(input,0,size-1);
    return;
}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}


