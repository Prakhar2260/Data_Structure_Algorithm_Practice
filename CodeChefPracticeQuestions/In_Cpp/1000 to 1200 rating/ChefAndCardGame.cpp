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
	    
	    int chef=0;
	    int morty=0;
	    
	    while(n--)
	    {
	        long long x,y;
	        cin >> x >> y;
	        
	         int digitSum1=0;
	         int digitSum2=0;
	         
	         while(x>0)
	         {
	             digitSum1+=x%10;
	             x=x/10;
	         }
 
             while(y>0)
	         {
	             digitSum2+=y%10;
	             y=y/10;
	         }	         
	         
	         if(digitSum1>digitSum2)
	         {
	             chef++;
	         }
	         
	         else if(digitSum2>digitSum1)
	         {
	             morty++;
	         }
	         
	         else
	         {
	             chef++;
	             morty++;
	         }
	    }
	    
	    if(chef>morty)
	     {
	         cout << "0 "<< chef << endl;
	     }
	     
	     else if(morty>chef)
	     {
	         cout <<"1 "<< morty << endl;
	     }
	     
	     else
	     {
	         cout <<"2 "<<morty<<endl;
	     }
	}
	
	return 0;

}
