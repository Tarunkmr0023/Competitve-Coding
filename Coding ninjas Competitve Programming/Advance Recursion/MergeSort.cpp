#include <iostream>
using namespace std;

void merge(int a[],int s, int mid,int e)
{
    int temp[e-s+1];
    int i=s;
    int j=mid+1;
    int k=0;
    while(i<=mid && j<=e)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j++];
        }
    }
    while(i<=mid)
    {
        temp[k++]=a[i++];
    }
    while(j<=e)
    {
        temp[k++]=a[j++];
    }
     k=0;
    for(int i=s; i<=e ;i++)
    {
        a[i]=temp[k];
        k++;
    }
}

void helper(int a[],int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int mid=(s+e)/2;
    helper(a,s,mid);
    helper(a,mid+1,e);

    merge(a,s,mid,e);
}


void mergeSort(int input[], int size){
	helper(input,0,size-1);
    return;
}

int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}