#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	
	int T;
	cin >> T;
	
	while(T--)
	{
	    int n;
	    cin >> n;
	    
	    string st;
	    cin >> st;
	    
	    int allzero=1;
	    
	    for(int i=0;i<st.length();i++)
	     {
	         if(st[i]=='1')
	          {
	              allzero=0;
	              break;
	          }
	     }
	     
	    
	    if(allzero)
	    {
	        cout << "0" << endl;
	        continue;
	    }
	    
	    int alternating=0;
	    
	    for(int i=1;i<n;i++)
	     {
	         if(st[i-1]=='1' && st[i]=='1')
	          {
	              alternating=1;
	              break;
	          }
	     }
	     
	     if(alternating)
	     {
	         cout << "2" << endl;
	     }
	     
	     else
	     {
	         cout << "1" << endl;
	     }
	}
	
	return 0;

}
