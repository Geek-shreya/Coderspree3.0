#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
     int temp = arr[0];

  // Shift all elements of the array by one place to the left.
  for (int i = 0; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }

  // Move the first element to the last position of the array.
  arr[n - 1] = temp;

  // Return the rotated array.
  return arr;
}