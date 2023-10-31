#include <bits/stdc++.h> 
int minimumParentheses(string pattern) {
    // Write your code here.
    // pattern is the given string.
    int countL = 0 ;
    int countR = 0 ;
    for (int i = 0; i < pattern.length(); i++) {
        if (pattern[i]=='(')countL++;
        else if (pattern[i]==')'&& countL>0)countL--;
        else countR++;
    }
    return countL+countR;
}