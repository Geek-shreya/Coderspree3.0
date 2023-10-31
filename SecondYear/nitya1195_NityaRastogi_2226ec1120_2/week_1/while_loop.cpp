#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int even_sum=0;
	int odd_sum=0;
	long int n;
	cin >> n;
	while(n!=0)
	{
		int rem=n%10;
		if(rem%2==0)
		{
			even_sum+=rem;
		}
		else
		{
			odd_sum+=rem;
		}
        n=n/10;
	}
	cout << even_sum << " " << odd_sum;
	
}
