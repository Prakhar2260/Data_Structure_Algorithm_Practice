#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--)
    {
        int n;
        cin >> n;

        long long ans=0;

        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            ans += abs(x);
        }

        cout << ans << "\n";
    }

    return 0;
}
