#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int X;
        cin >> X;

        int power=1;

        while(power*2<=X)
        {
            power *= 2;
        }

        int answer=2*(X - power);

        cout << answer << '\n';
    }

    return 0;
}
