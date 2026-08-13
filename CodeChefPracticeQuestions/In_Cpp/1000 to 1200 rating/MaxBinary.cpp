#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n , k;
	    cin >> n >> k;
	    
	    string str;
	    cin >> str;
	    
	    str.reserve(n+k);
	    
	    if(str[0]=='0')
	     {
	         str[0]='1';
	         k--;
	     }
	     
	     while(k>0)
	      {
	          str.push_back('0');
	          k--;
	      }
	      
	      cout << str << endl;
	}

}
