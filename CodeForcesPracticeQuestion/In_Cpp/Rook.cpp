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
        string s;
        cin >> s;

        char c=s[0];
        char r=s[1];

        for(char i='1';i<='8';i++)
        {
            if (i != r)
                cout << c << i << "\n";
        }

      
        for(char i='a';i<='h';i++)
        {
            if(i!=c)
                cout << i << r << "\n";
        }
    }

    return 0;
}
