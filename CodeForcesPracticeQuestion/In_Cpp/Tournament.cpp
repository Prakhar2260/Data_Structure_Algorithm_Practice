#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n,j,k;
	    cin >> n >> j >> k;
	    
	    vector <int> ar(n);
	    
	    for(int i=0;i<n;i++)
	     {
	         cin >> ar[i];
	     }
	     
	     if(k>1)
        {
            cout << "YES\n";
        }
        
        else
        {
            int mx=*max_element(ar.begin(), ar.end());

            if (ar[j - 1] == mx)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
	}
	
	return 0;

}
