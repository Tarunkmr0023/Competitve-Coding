#include<iostream>
#include <algorithm>
using namespace std;
int FindUnique(int arr[], int size)
{
    int XOR=0;
    for(int i=0;i<size;i++)
    {
        XOR=XOR^arr[i];
    }
    return XOR;
}
int main() {

	int size;

	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
	cout<<FindUnique(input,size)<<endl;
		
	return 0;
}
