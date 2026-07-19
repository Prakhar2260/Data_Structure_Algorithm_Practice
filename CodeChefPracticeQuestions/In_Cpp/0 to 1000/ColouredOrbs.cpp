#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int R, B;
    cin >> R >> B;

    int g=min(R,B);

    int ans=R+2*B+2*g;
    cout << ans << "\n";

    return 0;
}
