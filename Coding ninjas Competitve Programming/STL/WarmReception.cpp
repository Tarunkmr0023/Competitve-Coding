#include<bits/stdc++.h>
using namespace std;
int chair(int arr[], int dep[], int n) 
{ 
   sort(arr, arr+n); 
   sort(dep, dep+n); 
   
   int chair_needed = 1, result = 1; 
   int i = 1, j = 0; 
   
   while (i < n && j < n) 
   { 
      if (arr[i] <= dep[j]) 
      { 
          chair_needed++; 
          i++; 
  
          if (chair_needed > result)  
              result = chair_needed; 
      } 
  
      else
      { 
          chair_needed--; 
          j++; 
      } 
   } 
  
   return result; 
} 

int main() 
{ 
    int n,i;
    cin>>n;
    int arr[n];
    int dep[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
        cin>>dep[i];
    cout <<chair(arr, dep, n); 
    return 0; 
} 
