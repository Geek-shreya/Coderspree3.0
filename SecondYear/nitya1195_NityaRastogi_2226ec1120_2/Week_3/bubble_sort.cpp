

void bubbleSort(int arr[], int n) 
{
    //write your code here
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=1;i<n;i++)
    {
       for(int j=0;j<n-1;j++)
       {
           if(arr[j]>arr[j+1])
           {
               swap(arr[j],arr[j+1]);
           }
       }
    }
    
}