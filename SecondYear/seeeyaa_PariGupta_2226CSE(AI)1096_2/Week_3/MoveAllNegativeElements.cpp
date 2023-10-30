//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int pos=0,neg=0,i;
        for(i=0;i<n;i++)
        {
            if(arr[i]>=0) pos++;
            if(arr[i]<0) neg++;
        }
        int arr1[pos],arr2[neg];
        int j=0,k=0;
         
        for(i=0;i<n;i++)
        {
            if(arr[i]>=0) 
            {
                arr1[j]=arr[i];
                j++;
            }
            else 
            {
                arr2[k]=arr[i];
                k++;
            }
                
        }
        for (i = 0; i < pos; i++) {
            arr[i] = arr1[i];
        }
        for (i = 0; i < neg; i++) {
            arr[i + pos] = arr2[i];
        }
        
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends