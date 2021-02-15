#include<iostream>
using namespace std;

void helper(int input[], int size, int x, int output[],int& k,int i)
{
    if(i==size)
    {
        return;
    }
    if(input[i]==x)
    {
        output[k]=i;
        k++;
    }
    helper(input,size,x,output,k,i+1);
}
int allIndexes(int input[], int size, int x, int output[])
{
    int k=0;
    helper(input,size,x,output,k,0);
    return k;
}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
    

}


