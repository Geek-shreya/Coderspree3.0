#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int target)
{
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(mid > target)
        {
            e=mid-1;
        }
        else if(mid < target)
        {
            s=mid+1;
        }
        else if (mid==target)
        {
            return mid;
            break;

        }
        mid=s+(e-s)/2;
    }
    return mid;
}



/*int search(vector<int> &nums, int target) {
     Write your code here.
     //int n;
     //cin >> n;
     //for(int i=0;i<n;i++)
     //{
     // cin >> nums;
    // }
     cin >> target;
     int t=(int nums,int n,int target);
    return t;
    
}*/
int main()
{
    int n;
    int arr[50];
    int target;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cin >> target;
    int t=binarySearch(arr,n,target);
    cout <<  t;
}    