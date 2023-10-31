#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{
    // Write your code here.
    vector<int>v(n);

    for(int i=0;i<n;i++){
        v[i] = arr[i];
    }

    sort(v.begin(), v.end());
    int i=0,j=0;
    for(i=0;i<n;i++){
        if(v[i] > 0){
            j++;
            if(v[i]!=j)
            return j;
        }
    }
    return j+1;
}