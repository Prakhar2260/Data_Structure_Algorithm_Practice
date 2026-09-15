#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int rem = N % 3;

    if (rem == 0)
        cout << N << '\n';
    else if (rem == 1)
        cout << N - 1 << '\n';
    else
        cout << N + 1 << '\n';

    return 0;
}
