

int linearSearch(int n, int num, vector<int> &arr)
{
    // Write your code here.
    cin >> n;
    cin >>num;
    int temp=-1;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            temp=i;
            break;

        }
    }
    return temp;
    
}
