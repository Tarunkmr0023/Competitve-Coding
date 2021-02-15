#include<bits/stdc++.h>
using namespace std;

vector<int> longestConsecutiveIncreasingSequence(int *arr, int n){

  unordered_map<int,bool> mp;
  for(int i=0;i<n;i++)
    {
        mp[arr[i]]=true;
    }
    int maxLen = INT_MIN;
    int start=arr[0];
    for(int i=0;i<n;i++)
    {
        int len=1;
        if(mp[arr[i]])
        {
            int s=arr[i];
            mp[arr[i]]=false;
            for(int j=1;;j++)
            {

                if(mp.find(arr[i]+j)!=mp.end())
                {
                    mp[arr[i]+j]=false;
                    len++;
                }
                else
                {
                    break;
                }
            }
            for(int j=1;;j++)
            {
                if(mp.find(arr[i]-j)!=mp.end())
                {
                    len++;
                    mp[arr[i]-j]=false;
                    s = arr[i]-j;
                }
                else
                {
                    break;
                }
            }
            if(maxLen==len)
            {
                int ans1=start;
                int ans2=s;

                for(int i=0;i<n;i++)
                {
                    if(arr[i]==ans1)
                    {
                        start=ans1;
                        break;
                    }
                    else if(arr[i]==ans2)
                    {
                        start=ans2;
                        break;
                    }
                }
            }

            else if(maxLen<len)
            {
                maxLen=len;
                start=s;
            }
        }
    }

    vector<int > sol;
    int i=0;
    while(maxLen--)
    {
        sol.push_back(start+i);
        i++;
    }
    return sol;
}

int main(){
  int size;
  
  cin >> size;
  int* arr = new int[size];
  for(int i = 0; i < size; i++){
    cin >> arr[i];
  }
  vector<int> ans = longestConsecutiveIncreasingSequence(arr,size);
  
  for (auto it = ans.cbegin(); it != ans.cend(); it++) {
	cout << *it <<endl;
  }

  delete arr;
}