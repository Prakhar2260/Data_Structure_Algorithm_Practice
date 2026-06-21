#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long a,b,c;
        cin >> a >> b >> c;

        long long ans=0;

        for(int x=0;x<=5;x++)
        {
            for(int y=0;y<=5;y++)
            {
                for(int z=0;z<=5;z++)
                {
                    if(x+y+z<=5)
                    {
                        ans=max(ans,(a+x)*(b+y)*(c+z));
                    }
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
