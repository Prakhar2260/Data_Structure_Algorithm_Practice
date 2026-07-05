#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int diff=abs(a-b);
        cout << (diff+2*c-1) / (2*c) << '\n';
    }

    return 0;
}
