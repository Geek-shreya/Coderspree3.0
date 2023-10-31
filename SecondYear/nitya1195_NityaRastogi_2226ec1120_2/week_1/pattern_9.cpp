 #include<iostream>
 using namespace std;
 
 
 int main() {
        // code here
        int n;
        cin >> n;
        for(int i=1;i<=5;i++)
        {
            for(int j=5;j>=i;j--)
            {
                cout << "*";
            }
            for(int k=1;k<=2*(i-1);k++)
            {
                cout << " ";
            }
            for(int j=5;j>=i;j--)
            {
                cout << "*";
            }
            cout << endl;
        }
        for(int i=1;i<=5;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout << "*";
            }
            for(int k=1;k<=2*(n-i);k++)
            {
                cout << " ";
            }
            for(int j=1;j<=i;j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }