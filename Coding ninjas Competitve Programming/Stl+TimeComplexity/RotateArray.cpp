#include<bits/stdc++.h>
using namespace std;
void Rotate(int arr[], int d, int size) {
    if(d==0)
    {
        return;
    }
    int b[d];
    int j=0;
    for(int i=0;i<d;i++)
    {
        b[i]=arr[i];
    }
    for(int i=0;i<size;i++)
    {
        if(i<size-d)
        {
            arr[i]=arr[i+d];
        }
        else
        {
            arr[i]=b[j];
            j++;
        }
    }
    return;
}	


int main() {

	int size;
	int d;
	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	cin >> d;
    
    Rotate(input,d,size);
	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";
	return 0;

}
