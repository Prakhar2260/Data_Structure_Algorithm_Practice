#include <stdio.h>

int main() 
{
	// your code goes here
	
	int n,m;
	scanf("%d %d",&n,&m);
	
	char photo[n][m];
	for(int i=0;i<n;i++)
	 {
	     for(int j=0;j<m;j++)
	      {
	          scanf(" %c",&photo[i][j]);
	      }
	 }
	 
	 int IsBW=1;
	 
	 	for(int i=0;i<n;i++)
	     {
	     for(int j=0;j<m;j++)
	      {
	         if(photo[i][j]=='C'  || photo[i][j]=='M' || photo[i][j]=='Y')
	          {
	              IsBW=0;
	              break;
	          }
	      }
	     }
	     
	     if(IsBW==1)
	      {
	          printf("#Black&White\n");
	      }
	      
	      else
	      {
	          printf("#Color\n");
	      }
	     
	     return 0;
	
}

