#include <iostream> 
#include<string>
using namespace std;
string encode(string &message)
{
    //   Write your code here.
     string encoded_message = "";
  int count = 1;
  char current_char = message[0];
  for (int i = 1; i < message.length(); i++) {
    if (message[i] == current_char) {
      count++;
    } else {
      encoded_message += current_char + to_string(count);
      current_char = message[i];
      count = 1;
    }
  }
  encoded_message += current_char + to_string(count);
  return encoded_message;
}
 