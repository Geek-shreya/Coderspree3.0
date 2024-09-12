#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= n - i ; j++)
                cout << " ";
            for(int j = 1 ; j <= 2 * i - 1 ; j++)
                cout << "*";
            cout << endl;
        }
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution s;
        s.printTriangle(n);
    }
    return 0;
}