#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	
	int k,n;
	
	cin >> k >> n;
	
	vector <string> fav(k),lucky(n);
	
	for(int i=0;i<k;i++)
	 {
	     cin >> fav[i];
	 }
	 
	 for(int i=0;i<n;i++)
	 {
	     cin >> lucky[i];
	 }
	 
	 int j=0;
	 while(j<n)
	 {
	     string str=lucky[j];
	     bool pos=false;
	     
	     if(str.length()>=47)
	      {
	         pos=true;
	      }
	      
	      for(int z=0;z<k;z++)
	       {
	           if(str.find(fav[z]) != string::npos)
	            {
	                 pos=true;
	                 break;
	            }
	       }
	       
	       if(pos)
	       {
	            cout << "Good" << endl;
	       }
	       
	       else
	       {
	            cout << "Bad" << endl;
	       }
	     
	     
	     j++;
	 }
	
     return 0;
}
