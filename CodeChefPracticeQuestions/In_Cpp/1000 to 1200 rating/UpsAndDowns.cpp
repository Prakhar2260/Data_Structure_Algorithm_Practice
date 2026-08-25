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
	     {
	         cin >> ar[i];
	     }
	     
	     for(int i=1;i<n;i++)
	      {
	          if(i%2==0 && ar[i-1] <=ar[i])
	           {
	               swap(ar[i-1],ar[i]);
	           }
	           
	           if(i%2!=0 && ar[i-1] >=ar[i])
	           {
	               swap(ar[i-1],ar[i]);
	           }
	      }
	      
	      for(int i=0;i<n;i++)
	       {
	           cout << ar[i] << " ";
	       }
	       
	       cout << "" << endl;
	}
	
	return 0;

}
