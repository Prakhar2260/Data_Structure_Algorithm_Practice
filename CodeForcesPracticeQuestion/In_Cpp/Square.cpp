#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    int x1,y1;
	    int x2,y2;
	    int x3,y3;
	    int x4,y4;
	    
	    cin >> x1 >> y1 ;
	    cin >> x2 >> y2 ;
	    cin >> x3 >> y3 ;
	    cin >> x4 >> y4 ;
	    
	    int d1=(x1-x2)*(x1-x2) + (y1-y2)*(y1-y2); 
	    int d2=(x1-x3)*(x1-x3) + (y1-y3)*(y1-y3); 
	    int d3=(x1-x4)*(x1-x4) + (y1-y4)*(y1-y4); 
	    
	    int min=d1;
	    
	    if(min>d2)
	    {
	        min=d2;
	    }
	    
	    else if(min>d3)
	    {
	        min=d3;
	    }
	    
	    cout << min << endl;
	    
	}
	
	return 0;

}
