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
        int N;
        cin >> N;

        int odd=0,even=0;

        for(int i=0;i<N;i++)
        {
            int x;
            cin >> x;

            if(x%2)
                odd++;
                
            else
                even++;
        }

        if(odd==0)
            cout << 0 << '\n';
            
        else
            cout << even+(odd + 1)/2 << '\n';
    }

    return 0;
}
