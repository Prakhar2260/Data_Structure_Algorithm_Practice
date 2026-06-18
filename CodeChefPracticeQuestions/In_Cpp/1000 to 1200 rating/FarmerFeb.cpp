#include <bits/stdc++.h>
using namespace std;

int isprime(int n)
{  
    if(n==0)
     return 0;
     
    else if(n==1)
     return 0;
     
    else if(n==2)
     return 1;
     
    else if(n%2==0)
     return 0;
     
    else
    {
        for(int i=3;i*i<=n;i++)
         {
             if(n%i==0)
               return 0;
         }
         
         return 1;
    }
    
}


int main() 
{
	// your code goes here
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    int a,b;
	    cin >> a >> b;
	    
	    int sum=a+b;
	    
	         int count=1;
	         
	         while(!isprime(sum+count))
	          {
	              count++;
	          }
	          
	          cout << count << endl;
	    
	}
	
	return 0;

}
