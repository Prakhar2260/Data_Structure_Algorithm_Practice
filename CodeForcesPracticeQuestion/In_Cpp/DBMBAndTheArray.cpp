#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
{
        int n, s, x;
        cin >> n >> s >> x;

        int sum=0;

        for(int i=0;i<n;i++) 
       {
            int val;
            cin >> val;
            sum+=val;
        }

        if(s>=sum && (s-sum)%x==0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
