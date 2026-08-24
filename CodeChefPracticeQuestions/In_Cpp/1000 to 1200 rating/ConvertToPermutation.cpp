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
	     cin >> ar[i];
	     
	     sort(ar.begin(),ar.end());
	     
	     long long op=0;
	     bool pos=true;
	     
	     for(int i=0;i<n;i++)
	     {
	         long long required = i+1;
	         
	         if(required<ar[i])
	          {
	              pos=false;
	              break;
	          }
	          
	          op+=abs(required-ar[i]);
	     }
	     
	     if(pos)
            cout <<op<< '\n';
        else
            cout << -1 << '\n';
	     
	     
	     
	}

}
