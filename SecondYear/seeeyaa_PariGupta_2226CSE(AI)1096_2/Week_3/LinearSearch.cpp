int linearSearch(int n, int num, vector<int> &arr)
{
    // Write your code here.
    int data,i,index=-1;
    for(i=0;i<n;i++)
    {
        cin>>data;
        arr.push_back(data);
    }
    for(i=0;i<n;i++ )
    {
        if(arr[i]==num)
        {
             index=i; 
             break;
        }
       
    }
     return index;
}    
   
