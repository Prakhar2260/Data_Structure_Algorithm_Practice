#include <stdio.h>



int main()
{
	// your code goes here
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	   long a,b;
	   scanf("%ld %ld",&a,&b);
	   
	   if (a>0 && b%a== 0)
            printf("Yes\n");
        else
            printf("No\n");
	}
	
	return 0;
	

}

