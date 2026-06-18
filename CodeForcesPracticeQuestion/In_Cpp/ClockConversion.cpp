#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >> t;
	cin.ignore();
	
	while(t--)
	{
	  string st;
	  getline(cin,st);
	  
	  int d1=st[0]-'0';
	  int d2=st[1]-'0';
	  
	  char d3=st[3];
	  char d4=st[4];
	  
	  int hour=d1*10+d2;
	  
	  if(hour==0)
	  {
	      st[0]='1';
	      st[1]='2';
	      cout << st << " AM" << endl;
	  }
	  
	  else if(hour >0 && hour<12)
	  {
	      cout << st << " AM" << endl;
	  }
	  
	  else if(hour==12)
	  {
	      cout << st << " PM" << endl;
	  }
	  
	  else if(hour>12)
	  {
	      hour=hour-12;
	      
	      char t1=hour/10 + '0';
	      char t2=hour%10 + '0';
	      
	      st[0]=t1;
	      st[1]=t2;
	      
	      cout << st << " PM" << endl;
	  }
	   
	}
	
	return 0;
}
