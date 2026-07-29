#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    if (X - Y >= 18)
        cout << "RCB";
    else
        cout << "CSK";

    return 0;
}
