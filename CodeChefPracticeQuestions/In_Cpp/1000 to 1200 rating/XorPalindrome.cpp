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
	    
	    string str;
	    cin >> str;
	    
	    int i=0;
	    int j=n-1;
	    
	    int count=0;
	    while(i<j)
	     {
	         if(str[i]!=str[j])
	          {
	              count++;
	          }
	          
	          i++;
	          j--;
	     }
	     
	     cout << (count+1)/2 << endl;
	}
	
	return 0;

}
