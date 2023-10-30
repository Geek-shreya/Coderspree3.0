#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for (int i  = 0 ; i<n-1 ; i++){
        int min = n-1;
        for (int j = n-1;j>=i;j--){
            if (arr[j]<arr[min])min = j;
        }
        swap(arr[min] , arr[i]);
    }
}