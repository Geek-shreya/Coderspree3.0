#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    int max  = arr[0];
    int max2  = -9999;
    bool isChanged = false;
    for (int i = 1; i < n; i++) {
      if (arr[i]>max)max = arr[i];
    }
    for (int i = 0; i < n; i++) {
      if (arr[i] > max2 && arr[i] != max) {
        max2 = arr[i];
        isChanged = true;
      }
    }
    if (isChanged)return max2;
    else return -1;
}