#include <iostream>
#include <vector>
using namespace std;

string reverseStringWordWise(string input)
{
    //Write your code here
    string result;
    int i = 0 ; 
    int n = input.length();
    while (i < n) {
        while(i< n && input[i]==' ')i++;
        int j = i+1;
        while (j<n && input[j]!=' ')j++;
        string sub = input.substr(i , j-i);
        result = sub + ' ' + result;
        i = j+1;
    }
    return result;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}