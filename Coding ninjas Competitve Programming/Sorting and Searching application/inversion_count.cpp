typedef long long ll;

ll merge(int a[],int l,int mid,int r)
{
    int i=l,j=mid,k=0;
    ll count=0;
    int temp[r-l+1];
    
    while(i<mid && j<=r)
    {
        if(a[i]<=a[j])
        {
          temp[k++]=a[i++];  
        }
        else
        {
            temp[k++]=a[j++];
            count+=mid-i;
        }
    }
    while(i<mid)
    {
        temp[k++]=a[i++];
    }
    while(j<=r)
    {
       temp[k++]=a[j++]; 
    }
    for(int i=l,k=0;i<=r;i++,k++)
    {
        a[i]=temp[k];
    }
    return count;
}

ll  mergeSort(int a[],int l,int r)
{
    ll count=0;
   if(r>l)
   {
       int mid=(l+r)/2;
       ll countLeft=mergeSort(a,l,mid);
       ll countRight=mergeSort(a,mid+1,r);
       ll myCount=merge(a,l,mid+1,r);
       
       return (countLeft+countRight+myCount);
   }
    return count;
}

long long getInversions(int A[], int n)
{
	ll ans=mergeSort(A,0,n-1);
    return ans;
}
