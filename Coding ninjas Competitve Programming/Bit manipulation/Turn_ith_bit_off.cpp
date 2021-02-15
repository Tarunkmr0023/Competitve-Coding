int turnOffIthBit(int n, int i){
    int z=n & ~(1<<i);
    return z;
    
}