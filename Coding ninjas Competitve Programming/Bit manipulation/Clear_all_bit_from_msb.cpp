#include<iostream>
using namespace std;
int clearAllBits(int n, int i){
    if(n==0)
    {
        return 0;
    }
    int  m=((1<<(i))-1);
        n=n&m;
    return n;
}

