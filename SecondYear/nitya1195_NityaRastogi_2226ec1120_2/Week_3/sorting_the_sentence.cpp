#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        vector<pair<string, int>> words;
        istringstream ss(s);
        string word;
        while (ss >> word) {
            int position = word.back() - '0';
            word.pop_back();
            words.push_back({word, position});
        }
        
        sort(words.begin(), words.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
            return a.second < b.second;
        });
        
        string result;
        for (int i = 0; i < words.size(); i++) {
            result += words[i].first;
            if (i < words.size() - 1) {
                result += ' ';
            }
        }
        
        return result;
    }
};
