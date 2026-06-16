#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    int a,b,c;
	    cin >> a >> b >> c;
	    
	    int val=10203;
	    
	    val=min(val , abs(a-b)+abs(a-c) );
	    val=min(val , abs(c-b)+abs(a-b) );
	    val=min(val , abs(c-b)+abs(a-c) );
	  
	    
	    cout << val << endl;
	}
	
	return 0;

}
