//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    string reverseWord(string str)
    {
        int count=0;
        char temp;
        for(int i=0;str[i]!='\0';i++)
        {
            count++;
        }
    
        for(int i=0;i<count/2;i++)
       {
           temp=str[i];
           str[i]=str[count-1-i];
           str[count-1-i]=temp;       
           
       }
       return str;
       
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends