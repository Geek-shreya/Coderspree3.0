#include<iostream>
#include<math.h>
using namespace std;



bool checkArmstrong(int n){
	//Write your code here
	cin >> n;
	int a,b;
	a=n;
	b=n;
	int num=0;
	int count=0;
	while(n!=0)
	{
		count++;
		n=n/10;
	}
	while(a!=0)
	{
		int rem=a%10;
		num=num+pow(rem,count);
		a=a/10;

	}
	if(num==b)
	{
		return true;
	}
	else
	{
		return false;
	}

}