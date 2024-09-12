#include <bits/stdc++.h> 
string encode(const string &message) {
    if (message.empty()) {
        return "";
    }

    string result;
    char prev = message[0];
    int count = 1;

    for (int i = 1; i < message.length(); i++) {
        if (message[i] == prev) {
            count++;
        } else {
            result += prev;
            if (count >= 1) {
                result += to_string(count);
            }
            prev = message[i];
            count = 1;
        }
    }

    result += prev;
    if (count >= 1) {
        result += to_string(count);
    }
    

    return result;
}
