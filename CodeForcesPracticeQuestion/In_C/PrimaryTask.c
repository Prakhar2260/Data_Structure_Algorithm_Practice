#include <stdio.h>

int main()
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    
	    int digit=0;
	    
	    int num=n;
	    while(num>0)
	    {
	        digit++;
	        num=num/10;
	    }
	    
	    int arr[digit];
	    
	    num=n;
	    int index=digit-1;
	    while(num>0)
	    {
	        int rem=num%10;
	        arr[index--]=rem;
	        num=num/10;
	    }
	    
	    if(digit < 3)
         {
            printf("NO\n");
         }
         
         
         else if(arr[0]!=1 || arr[1]!=0)
           {
            printf("NO\n");
           }
           
          else if(digit > 3)
          {
          if(arr[2]==0)
             printf("NO\n");
             
        else
        printf("YES\n");
       }
       
      else
      {
     if(arr[2]>=2)
        printf("YES\n");
        
    else
        printf("NO\n");
      }
	    
	    
	    
	}
	
	return 0;
}

