#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	
	int n1,n2,n3;
	
	cin >> n1 >> n2 >> n3 ;
	
    set<int> a,b,c;
    
    for(int i=0;i<n1;i++)
     {
         int x;
         cin >> x;
         
         a.insert(x);
     }
     
     for(int i=0;i<n2;i++)
     {
         int x;
         cin >> x;
         
         b.insert(x);
     }
     
     for(int i=0;i<n3;i++)
      {
          int x;
          cin >> x;
          
          c.insert(x);
      }
      
      map<int , int> freq;
      
      
      for(int j : a)
       {
           freq[j]++;
       }
       
       for(int j : b)
       {
           freq[j]++;
       }
       
       for(int j : c)
        {
            freq[j]++;
        }
	
	int voters=0;
	
	for(auto [x , count] : freq)
	 {
	     if(count >= 2)
	      {
	          voters++;
	      }
	 }
	 
	 cout << voters << endl;
	 
	 for(auto [x , count] : freq)
	 {
	     if(count >= 2)
	      {
	          cout << x << endl;
	      }
	 }
	 return 0;
}
