#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;

    while(T--)
    {
        int X;
        cin >> X;

        if(X>100)
            cout<<X-10<<"\n";
            
        else
            cout << X << "\n";
    }

    return 0;
}
