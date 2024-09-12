#include <iostream>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        // code here
          for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << "*";
            if (j < i) {
                cout << " ";
            }
        }

        
        cout << endl;
    }
   
    for (int i = n ; i >= 1; i--) {
       
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

       
        for (int j = 1; j <= i; j++) {
            cout << "*";
            if (j < i) {
                cout << " ";
            }
        }

       
        cout << endl;
    }

    }
};