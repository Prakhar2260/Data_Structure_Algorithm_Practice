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
	    
	    string str;
	    cin >> str;
	    
	    int f=1;
	    
	    for(int i=1;i<n;i++)
	     {
	         if(str[i-1]>str[i])
	          {
	              str.erase(i-1,1);
	              f=0;
	              break;
	          }
	     }
	     
	     if(f)
	     {
	         str.pop_back();
	     } 
	     
	     cout << str << endl;
	    
	    
	}
	
	return 0;

}
