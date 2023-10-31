pair<long long, long long> getMinMax(long long a[], int n) {
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int min=a[0];
    for(int i=1;i<n;i++)
    {
        if(min > a[i])
        {
            min=a[i];
        }
    }
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(max < a[i])
        {
            max=a[i];
        }
    }
    /*pair.first=min;
    pair.second=max;
    cout << pair.first << " " << pair.second;*/
    pair(min,max);
    return pair;
    