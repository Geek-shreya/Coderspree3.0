#include <iostream>
#include <string>
using namespace std;

string compareIfElse(int a, int b) {
    string result; // Declare a string variable to hold the result

    if (a == b) {
        result = "equal";
    } else if (a > b) {
        result = "greater";
    } else {
        result = "smaller";
    }

    return result; // Return the result as a string
}

int main() {
    int x = 5;
    int y = 3;
    string comparisonResult = compareIfElse(x, y);
    cout << "Comparison result: " << comparisonResult << endl;

    return 0;
}

