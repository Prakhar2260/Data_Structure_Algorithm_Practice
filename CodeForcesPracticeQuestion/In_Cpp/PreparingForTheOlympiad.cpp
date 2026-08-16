#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	
	int t;
	cin >> t;
	
	
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    vector <int>ar(n),br(n);
	    
	    for(int i=0;i<n;i++)
	     {
	         cin >> ar[i];
	     }
	     
	     for(int i=0;i<n;i++)
	     {
	         cin >> br[i];
	     }
	     
	     int ans=0;
	     
	     for(int i=0;i<n;i++)
	     {
	         
	         int val;
	         if(i!=n-1)
	          {
	             val=ar[i]-br[i+1];
	          }
	          
	          else
	          {
	             val=ar[i];
	          }
	          
	          if(val>0)
	               {
	                   ans+=val;
	               }
	     }
	     
	     cout << ans << endl;
	  
	}
	
	return 0;

}
