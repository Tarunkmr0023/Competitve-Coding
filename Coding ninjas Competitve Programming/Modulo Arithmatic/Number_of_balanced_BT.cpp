#define mod 1000000007
int balancedBTs(int h) {
  if(h==0 || h==1)
  {
      return 1;
  }
    int x=balancedBTs(h-1)%mod;
    int y=balancedBTs(h-2)%mod;
    long res1=(long)x*x;
    long res2=(long)x*y*2;
    int ans1=(int)(res1%mod);
    int ans2=(int)(res2%mod);
	int ans=(ans1+ans2)%mod;
    return ans;
}
