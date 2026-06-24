#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--) 
    {
        int A,B,C,D;
        cin >> A >> B >> C >> D;

        if(A+B+C<=D)
            cout << 1 << '\n';
            
        else if(B+C<=D || A+B<=D)
            cout << 2 << '\n';
            
        else
            cout << 3 << '\n';
    }

    return 0;
}
