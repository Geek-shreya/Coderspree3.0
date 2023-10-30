pair<long long, long long> getMinMax(long long a[], int n) {
    int min = a[0];
    int max = a[0];
    for (long long i = 0 ;i<n ; i++){
        if (a[i]>max)max = a[i];
        if (a[i]<min)min = a[i];
    }
    return {min , max};
    
}