#include <bits/stdc++.h> 
string encode(string &message)
{
    //   Write your code here.
    int count = 1;
    string ans="";
    for(int i=0;i<message.size();i++){
        if(message[i]!=message[i+1]){
            ans+=message[i]+to_string(count);
            count =1;
            continue;
        }
        count++;
    }
    return ans;
}