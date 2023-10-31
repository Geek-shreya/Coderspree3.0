#include <iostream>
#include <vector>
using namespace std;

vector<int> printNos(int y) {
    // Write Your Code Here
    vector<int> num;

  
  for (int j = 1; j <= y; j++) {
    num.push_back(j);
  }
  return num;
}