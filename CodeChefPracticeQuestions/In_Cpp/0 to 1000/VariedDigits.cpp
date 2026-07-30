#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    int a = x / 10;
    int b = x % 10;

    if (a != b)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
