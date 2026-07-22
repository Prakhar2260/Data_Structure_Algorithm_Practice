#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long A, B;
    cin >> A >> B;

    long long n=min(A, B);
    long long ans=1;

    for(long long i=1;i<=n;i++)
    {
        ans *= i;
    }

    cout << ans << "\n";

    return 0;
}
