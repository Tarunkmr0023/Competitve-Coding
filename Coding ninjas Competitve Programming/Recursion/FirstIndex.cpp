#include<iostream>
using namespace std;
 
int index(int input[],int i,int n,int x)
{
    if(i==n)
        return -1;
    if(input[i]==x)
        return i;
    return index(input,i+1,n,x);
}

int firstIndex(int input[], int size, int x) {
  return index(input,0,size,x);
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
    
    cout << firstIndex(input, n, x) << endl;

}


