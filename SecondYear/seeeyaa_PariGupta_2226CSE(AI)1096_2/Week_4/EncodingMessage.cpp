#include <bits/stdc++.h> 
string encode(string &message)
{
    int n = message.length();
    string encodmes = "";

    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i < n - 1 && message[i] == message[i + 1]) {
            count++;
            i++;
        }
        encodmes += message[i] + to_string(count);
    }
    return encodmes;

    
}