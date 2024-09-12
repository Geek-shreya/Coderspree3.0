#include<iostream>
  using namespace std;

  int main()
  {
    int a=-1;
    int b=1;
    int sum=0;
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        
        int sum=a+b;
        cout << sum << " ";
        a=b;
        b=sum;
    }
  }