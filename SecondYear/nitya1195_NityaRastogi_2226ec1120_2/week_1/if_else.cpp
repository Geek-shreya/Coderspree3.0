#include <iostream>
#include <string>
using namespace std;


int main() {
    int a ;
    int b ;
    cin >> a >> b;
    if(a<b)
    {
        cout << "smaller";
    }
    else if(a>b)
    {
        cout << "greater";
    }
    else
    {
        cout << "equal";
    }
    

    return 0;
}


