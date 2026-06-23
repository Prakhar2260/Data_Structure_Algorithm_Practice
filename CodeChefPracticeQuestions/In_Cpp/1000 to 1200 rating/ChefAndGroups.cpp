#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;

    while(T--) 
    {
        string S;
        cin >> S;

        int groups=0;

        for(int i=0;i<S.size();i++)
        {
            if(S[i]=='1' && (i==0||S[i-1]=='0'))
            {
                groups++;
            }
        }

        cout << groups << "\n";
    }

    return 0;
}
