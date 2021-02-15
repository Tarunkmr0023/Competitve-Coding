#include<bits/stdc++.h>
using namespace std;
// O(n2) logic
	void pairSum(int *input, int n)
    {	 
		
	for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(input[i]+input[j]==0)
                {
                    cout<<min(input[i],input[j])<<" "<<max(input[i],input[j])<<endl;
                }
            }
        }
     	
 	}
// improved logic
void pairSum(int *input, int n) { 
    
    unordered_map<int, int> map;
    for (int i = 0; i < n; ++i) {
        
        int complement = -input[i];
        
        if (map.find(complement) != map.end()) {
            
            int counter = map[complement]; 
            
            while (counter--) { 
                
                cout << min(input[i], complement) << " " << max(input[i], complement) << endl;
                
            }
        }
        ++map[input[i]];
    }
}
//another logic
void pairSum(int *input, int n) {	 
	unordered_map<int, int> m1;
	for (int i = 0; i < n; ++i){
		m1[input[i]]++;
	}
    
    for(int i=0;i<n;i++){
        int total=0;
        int left=m1[input[i]];
        int right=m1[-input[i]];
        total=left*right;
        if(input[i]==0)
        {
            total=left;
        }
        while(total>0){
            cout << min(input[i],-input[i])<<" "<< max(input[i],-input[i]) << '\n';
            total--;
        }
        m1[input[i]]=0;
        m1[-input[i]]=0;
    }
     	
}

int main()
{
    int n;
    int arr[100000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    PairSum(arr, n);
    return 0;
}
