#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
 int i = 0;

  // Iterate over the array.
  for (int j = 1; j < n; j++) {
    // If the current element is different from the previous element,
    // copy it to the next unique element position.
    if (arr[j] != arr[i]) {
      arr[++i] = arr[j];
    }
  }

  // Return the number of unique elements.
  return i + 1;
}