bool isPrime(int n)
{
	// Write your code here.
	if(n == 1){
		return false;
	}
	for(int i = 2; i*i < n; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
/*
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	//Write your code here
    int n;
	cin >> n;
	int temp=0;
	for(int i=2;i<=n/2;i++)
	{
	    if(n%i==0)
	    {
	        temp=1;
	        break;
	    }
	}
	if(temp==1 )
	{
	    cout << "no";
	}
	else if(n==1)
	{
	    cout << "yes";
	}
    else
    {
        cout << "yes";
    }
}

*/