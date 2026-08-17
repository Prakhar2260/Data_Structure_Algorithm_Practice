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
	    
	    vector <int> ar(n);
	    
	    for(int i=0;i<n;i++)
	     {
	         cin >> ar[i];
	     }
	     
	     int x=0;
	     
	     for(int i=0;i<n;i++)
	      {
	          x=x^ar[i];
	      }
	      
	      int ans=x;
	      
	      for(int i=0;i<n;i++)
	       {
	           x=x^ar[i];
	           
	           ans=min(ans,x);
	           
	           x=x^ar[i];
	       }
	       
	       cout << ans << endl;
	}
	
	return 0;

}
