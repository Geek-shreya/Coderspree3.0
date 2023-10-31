#include <bits/stdc++.h> 
int minimumParentheses(string pattern)
{
    int left = 0;
    int right = 0;

    for (int i = 0; i < pattern.length(); ++i) {

        if (pattern[i] == '(') {
            left++;
        } else if (pattern[i] == ')' && left > 0) {
            left--;
        } else {
            right++;
        }
    }

    return left + right;
}