#include<iostream>
#include<math.h>
using namespace std;


bool palindrome(int n)
{
    // Write your code here
    
    cin >> n;
    int m=n;
    int num=n;
    num=0;
    while(n!=0)
    {
        int rem=n%10;
        num=num*10+rem;
        n=n/10;
        
    }
    if(num==m)
    {
        return true;
    }
    else
    {
        return  false;
    }
}