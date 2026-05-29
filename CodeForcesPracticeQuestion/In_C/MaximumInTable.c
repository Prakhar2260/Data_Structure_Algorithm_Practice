#include <stdio.h>

int main() 
{
	// your code goes here
	
	int ar[10][10];
	
	for(int i=0;i<10;i++)
	 {
	     ar[0][i]=1;
	 }
	 
	 for(int i=1;i<10;i++)
	 {
	     ar[i][0]=1;
	 }

     for(int i=1;i<10;i++)
	 {
	     for(int j=1;j<10;j++)
	      {
	        ar[i][j]=ar[i-1][j]+ar[i][j-1];
	      }
	 }
	 
	 int n;
	 scanf("%d",&n);
	 
	 printf("%d",ar[n-1][n-1]);
	 
	 return 0;
}

