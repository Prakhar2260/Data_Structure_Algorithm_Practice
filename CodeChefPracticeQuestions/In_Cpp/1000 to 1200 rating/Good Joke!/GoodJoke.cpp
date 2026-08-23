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
	    
	    for(int i=0;i<n;i++)
	    {
	        int x,y;
	        cin >> x >> y;
	    }
	    
	    int z=n%4;
	    
	    if(z==1)
	    {
	        cout << "1" << endl; 
	    }
	    
	    else if(z==2)
	     {
	          cout << n+1 << endl; 
	     }
	     
	     else if(z==3)
	     {
	          cout << "0" << endl; 
	     }
	     
	     else
	     {
	          cout << n << endl; 
	     }
	    
	    
	}
	
	return 0;

}
