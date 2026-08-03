#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	
	int T;
	cin >> T;
	
	while(T--)
  {	
	
	int x,y,n;
	long r;
	
	cin >> x >> y >> n >> r;
	
	int nb=n,pb=0;
	
	if(x*n>r)
	 {
	     cout << "-1" << endl;
	     continue;
	 }
	 
	 long total=x*n;
	 
	 while(total-x+y <= r)
	  {
	    nb--;
	    pb++;
	    
	    total=total-x+y;
	    
	    if(pb==n)
	     break;
	  }
	  
	  cout << nb << " " << pb << endl;
	
  }
  
  return 0;

}
