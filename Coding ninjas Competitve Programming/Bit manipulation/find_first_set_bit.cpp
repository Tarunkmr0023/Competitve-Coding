int returnFirstSetBit(int n){
    if(n==0)
    {
        return n;
    }
    int m=1;
    while((n&m)==0)
    {
        m=m<<1;
    }
    return m;
}

