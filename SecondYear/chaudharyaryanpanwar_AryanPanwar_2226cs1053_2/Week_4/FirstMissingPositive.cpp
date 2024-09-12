#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{
    // Write your code here.
    int target = 1 ;
    sort(arr[0], arr[n-1]);
    for (int i = 0; i < n; i++) {
      if (arr[i] == target) {
          ++target;
      }
    }
    return target; 
}