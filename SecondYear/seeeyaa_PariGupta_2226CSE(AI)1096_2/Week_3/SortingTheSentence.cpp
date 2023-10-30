#include <map>
#include <string>

class Solution {
public:
    string sortSentence(string s) {
        map<int, string> mp;
        s.push_back(' '); // Adding a space at the end to ensure the last word is processed

        string w = "";
        for (auto i : s) {
            if (i == ' ') {
                string num = "";
                while (!w.empty() && isdigit(w.back())) {
                    num = w.back() + num;
                    w.pop_back();
                }
                int val = stoi(num);
                mp[val] = w;
                w = "";
            } else {
                w += i;
            }
        }

        string ans = "";
        for (auto i : mp) {
            ans += i.second;
            ans += ' ';
        }

        ans.pop_back(); // Remove the trailing space
        return ans;
    }
};
