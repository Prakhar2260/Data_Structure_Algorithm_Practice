#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	
	int T;
	cin >> T;
	
	while(T--)
	{
	    int n,k;
	    cin >> n >> k;
	    
	    vector <int>arr(n);
	    
	    for(int i=0;i<n;i++)
	     {
	         cin >> arr[i];
	     }
	     
	    int sum=0;
	    int mn=0,mx=0;
	     
	     for(int i=0;i<n;i++)
	      {
	          sum+=arr[i];
	          
	          mn=min(sum,mn);
	          mx=max(sum,mx);
	      }
	      
	      
	      if(mx-mn<=k)
	      {
	          cout << "Yes" << endl;
	      }
	      
	      else
	      {
	          cout << "No" <<endl;
	      }
	}
	
	return 0;

}
