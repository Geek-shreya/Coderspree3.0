#include <iostream>
using namespace std;

int dataTypes(string type) {
    if (type == "Long") {
        return 8;
    } else if (type == "Float") {
        return 4;
    } else if (type == "Integer") {
        return 4;
    } else if (type == "Double") {
        return 8;
    } else {
        return 1;
    }
}