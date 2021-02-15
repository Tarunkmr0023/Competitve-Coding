#include <bits/stdc++.h>
using namespace std;


long long adjbc(int n,int k,int firstbit,int*** output){
    if(n==1){
        if(k==0){
            return 1;
        }
        return 0;
    }
    if(k<0){
        return 0;
    }
    if(output[n][k][firstbit]!=-1){
        return output[n][k][firstbit];
    }
    
    if(firstbit==0){
        long long ans1=adjbc(n-1,k,0,output)%1000000007;
        long long ans2=adjbc(n-1,k,1,output)%1000000007;
        output[n][k][0]=(ans1%1000000007+ans2%1000000007)%1000000007;
        return (ans1%1000000007+ans2%1000000007)%1000000007;
    }
    if(firstbit==1){
        long long ans1=adjbc(n-1,k,0,output)%1000000007;
        long long ans2=adjbc(n-1,k-1,1,output)%1000000007;
        output[n][k][1]=(ans1%1000000007+ans2%1000000007)%1000000007;
        return (ans1%1000000007+ans2%1000000007)%1000000007;
    }
}

int main()
{
    int p;
    cin>>p;
    while(p--){
        int j,n,bitcount;
        cin>>j>>n>>bitcount;
        int** output= new int*[n+1];
        for(int i=0;i<n+1;i++){
            output[i]=new int*[bitcount+1];
            for(int j=0;j<bitcount+1;j++){
                output[i][j]=new int[2];
            }
        }
        for(int i=0;i<n+1;i++){
            for(int j=0;j<bitcount+1;j++){
                for(int k=0;k<2;k++){
                    output[i][j][k]=-1;
                }
            }
        }
        
        cout<<j<<" "<<(adjbc(n,bitcount,0,output)%1000000007+adjbc(n,bitcount,1,output)%1000000007)%1000000007<<endl;
        
        
        
    }
    
    return 0;
}