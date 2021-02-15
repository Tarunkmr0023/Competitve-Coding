#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll minihelper (int *arr1, int size1, int *arr2, int size2) {
    int currMaxIndex = size1;
    ll currAns = 0, finalAns = 0;
    
    for(int i = 0; i < size1; i++) {
        if (arr1[i] >= arr2[0]) {
            currMaxIndex = i;
            break;
        } else
            currAns += arr1[i];
    }
    finalAns = currAns;
    
    for (int i = 1; i < size2; ++i) {
        ll localCurrAns = currAns;
        while (arr2[i] > arr1[currMaxIndex] && currMaxIndex < size1) {
            localCurrAns += arr1[currMaxIndex];
            currMaxIndex++;
        }
        currAns = localCurrAns;
        finalAns += localCurrAns;
    }
    return finalAns;
}

ll helper (int *arr, int si, int ei) {
    if(si >= ei)
        return 0;
    int mid = (si + ei) / 2;
    int n1 = mid - si + 1;
    int n2 = ei - mid;
    
    int arr1[n1];
    int arr2[n2];
    
    for(int i = si, k = 0; i <= mid; ++i, ++k)
        arr1[k] = arr[i];
    for(int i = mid + 1, k = 0; i <= ei; ++i, ++k)
        arr2[k] = arr[i];
    
    sort(arr1, arr1 + n1);
    sort(arr2, arr2 + n2);
    
    ll answer = minihelper(arr1, n1, arr2, n2);
    answer += helper(arr, si, mid) + helper(arr, mid + 1, ei);
    return answer;
}

int main () {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        cout << helper(arr, 0, n - 1) << endl;
    }
    
    return 0;
}





