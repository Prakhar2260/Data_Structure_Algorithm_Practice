#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n+1);

        for (int i=1;i<=n;i++)
            cin >> a[i];

        bool ok=true;

        int oddParity=a[1]%2;
        int evenParity=(n>=2 ? a[2] % 2:0);

        for(int i=1;i<=n;i+=2)
        {
            if(a[i]%2 !=oddParity)
                ok=false;
        }

        for(int i=2;i<=n;i+=2)
        {
            if(a[i]%2 != evenParity)
                ok = false;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
