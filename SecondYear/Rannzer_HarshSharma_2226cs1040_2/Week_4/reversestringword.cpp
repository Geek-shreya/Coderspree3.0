#include <iostream>
using namespace std;
#include<vector>
#include <sstream>
#include <algorithm>

string reverseStringWordWise(string input) {
  stringstream ss(input);
  vector<string> words;
  string word;
  while (ss >> word) {
    words.push_back(word);
  }

  reverse(words.begin(), words.end());

  string reversedString;
  for (int i = 0; i < words.size(); i++) {
    reversedString += words[i];

    if (i < words.size() - 1) {
      reversedString += " ";
    }
  }

  return reversedString;
}





int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
    

}


