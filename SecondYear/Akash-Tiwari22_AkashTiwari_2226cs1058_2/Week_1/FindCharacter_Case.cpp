#include<iostream>
using namespace std;

int main() {
	
	char a;
	cin>>a;
	if(isupper(a))
	{
	cout<<"1";
	}
	else if(islower(a)){
	cout<<"0";
	}
	else{
	cout<<"-1";
	}
	
}