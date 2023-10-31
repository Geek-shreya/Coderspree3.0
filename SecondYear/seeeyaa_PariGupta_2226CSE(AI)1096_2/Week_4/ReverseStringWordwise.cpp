#include <iostream>
#include <vector>  
using namespace std;

string reverseStringWordWise(string input)
{
    
     vector<string> tmp;
    string str = "";
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            tmp.push_back(str);
            str = "";
        } else {
            str += input[i];
        }
    }
    tmp.push_back(str);

    string reversedString = "";
    for (int i = tmp.size() - 1; i > 0; i--) {
        reversedString += tmp[i] + " ";
    }
    reversedString += tmp[0];
    
    return reversedString;

}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}