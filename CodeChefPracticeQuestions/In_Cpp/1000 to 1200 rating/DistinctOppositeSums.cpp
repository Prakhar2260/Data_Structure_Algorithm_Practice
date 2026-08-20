#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int N;
        cin >> N;

        int M=N/2;


        for(int i=1;i<=M;i++)
        {
            cout << i << " ";
        }

       
        for(int i=N;i>M;i--)
        {
            cout << i << " ";
        }

        cout << '\n';
    }

    return 0;
}
