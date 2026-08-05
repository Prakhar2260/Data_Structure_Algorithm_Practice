#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	
	int T;
	cin >> T;
	
	while(T--)
	{
	    int n,p;
	    cin >> n >> p;
	    
	    vector <char> ar(n);
	    
	    for(int i=0;i<n;i++)
	     {
	         cin >> ar[i];
	     }
	     
	     int leftMove=0;
	     int rightMove=0;
	     
	     for(int i=0;i<p;i++)
	      {
	          if(ar[i]=='R')
	           {
	               leftMove++;
	           }
	      }
	      
	      for(int i=p-1;i<n;i++)
	      {
	          if(ar[i]=='L')
	           {
	               rightMove++;
	           }
	      }
	      
	      cout << min(leftMove,rightMove) << endl;
	}
	
	return 0;

}
