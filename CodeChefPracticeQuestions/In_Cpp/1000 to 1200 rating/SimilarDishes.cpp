#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--)
    {
        string a[4], b[4];

      
        for(int i=0;i<4;i++)
        {
            cin >> a[i];
        }

    
        for(int i=0;i<4;i++)
        {
            cin >> b[i];
        }

        int common = 0;

        
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(a[i]==b[j])
                {
                    common++;
                    break;
                }
            }
        }

        if(common>=2)
            cout << "similar\n";
            
        else
            cout << "dissimilar\n";
    }

    return 0;
}
