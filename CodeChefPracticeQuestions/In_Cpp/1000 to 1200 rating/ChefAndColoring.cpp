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
	    cin >>n;
	    
	    string st;
	    cin >> st;
	    
	    int red=0;
	    int len=st.length();
	    for(int i=0;i<len;i++)
	    {
	        if(st[i]!='R')
	         {
	             red++;
	         }
	    }
	    
	    int green=0;
	   
	    for(int i=0;i<len;i++)
	    {
	        if(st[i]!='G')
	         {
	             green++;
	         }
	    }
	    
	    int blue=0;
	    
	    for(int i=0;i<len;i++)
	    {
	        if(st[i]!='B')
	         {
	             blue++;
	         }
	    }
	    
	    
	    int ans=min(red,blue);
	    ans=min(ans,green);
	    
	    cout << ans << endl;
	}
	
	return 0;

}
