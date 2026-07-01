#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int X, Y, Z;
    cin >> X >> Y >> Z;

    int cost0=2*X+3*Y;
    int cost1=Z+X+2*Y;
    int cost2=2*Z+Y;

    cout << min({cost0, cost1, cost2}) << endl;

    return 0;
}
