#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n,k;
	    cin >> n >> k;
	    
	    deque <long long> ar;
	    
	    for(int i=0;i<n;i++)
	     {
	          long long x;
	         cin >> x;
	         
	         ar.push_back(x);
	     }
	     
	     for(int i=0;i<k;i++)
	      {
	          long long mn=ar.front();
	          long long mx=ar.back();
	          
	          long long val=mn+mx;
	          
	          ar.pop_front();
	          ar.pop_back();
	          
	          ar.push_back(val);
	      }
	      
	      for(long long x : ar)
	       {
	           cout << x << " " ;
	       }
	       
	       cout << "\n";
	       
	}
	
	return 0;

}
