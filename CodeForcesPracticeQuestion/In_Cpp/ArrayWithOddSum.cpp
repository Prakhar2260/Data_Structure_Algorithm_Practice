#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector <int>arr(n);
	    
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    
	    int sum=std::accumulate(arr.begin(),arr.end(),0);
	    
	    if(sum%2!=0)
	    {
	        cout << "YES\n";
	        continue;
	    }
	    
	    int odd=0,even=0;

        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
                odd++;
                
            else
                even++;
        }

        if(odd>0 && even>0)
            cout << "YES\n";
            
        else if(odd==n)
            cout<<(n%2 ? "YES" : "NO") << '\n';
            
        else
            cout << "NO\n";
	}
	
	return 0;

}
