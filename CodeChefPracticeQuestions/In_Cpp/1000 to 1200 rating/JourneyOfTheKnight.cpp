#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--)
    {
        int x1,y1,x2,y2;
        cin >>x1>>y1 >> x2 >> y2;

        if((x1+y1) % 2 == (x2+y2) % 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
