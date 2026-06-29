#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    long long x;
    cin >> n >> x;

    long long ice=x;
    int distressed=0;

    while(n--) 
    {
        char op;
        long long d;
        cin >> op >> d;

        if(op=='+')
        {
            ice+=d;
        }
        
        else 
        {
            if(ice>=d)
                ice-=d;
                
            else
                distressed++;
        }
    }

    cout << ice << " " << distressed << "\n";

    return 0;
}
