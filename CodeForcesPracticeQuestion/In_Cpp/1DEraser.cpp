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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int ans=0;

        
        for(int i=0;i<=n-k;i++)
        {
            if(s[i]=='B')
            {
                ans++;
                for(int j=i;j<i+k;j++)
                    s[j]='W';
            }
        }

        
        bool black=false;
        for(int i=max(0,n-k+1);i<n;i++)
        {
            if (s[i]=='B')
            {
                black=true;
                break;
            }
        }

        if (black)
            ans++;

        cout << ans << '\n';
    }

    return 0;
}
