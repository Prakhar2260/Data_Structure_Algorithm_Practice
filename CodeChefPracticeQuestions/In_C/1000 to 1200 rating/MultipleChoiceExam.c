#include <stdio.h>

int main()
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    int n;
	    scanf("%d",&n);
	    
	    char str1[n+1];
	    char str2[n+1];
	    
	    scanf("%s",str1);
	    scanf("%s",str2);
	    
	    int correct=0;
	    
	    for(int i=0;i<n;i++)
	    {
	         if(str2[i]=='N')
             {
                continue;
             }

             else if(str1[i]==str2[i])
             {
                correct++;
             }
            
            else
            {
                i++;
            }
	        
	    }
	    
	    printf("%d\n",correct);
	}
	
	return 0;

}

