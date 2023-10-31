#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr)
{

   
     for (int test_case = 0; test_case < n; test_case++) {
        int t;
        cin >> n;

        arr.resize(n); 

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = key;
        }
    }

        
}