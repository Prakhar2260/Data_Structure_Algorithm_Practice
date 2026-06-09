#include <stdio.h>

int main() 
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int n,k;
	    scanf("%d %d",&n,&k);
	    
	    int arr[n];
	    for(int i=0;i<n;i++)
	     scanf("%d",&arr[i]);
	     
	     int count=0;
	     int gold=0;
	     
	     for(int i=0;i<n;i++)
	     {
	         if(arr[i]>=k)
	         {
	           gold+=arr[i];   
	         }
	         
	         else if(arr[i]==0 && gold>0)
	          {
	              count++;
	              gold--;
	          }
	         
	     }
	     
	     printf("%d\n",count);
	}
	
	return 0;

}

