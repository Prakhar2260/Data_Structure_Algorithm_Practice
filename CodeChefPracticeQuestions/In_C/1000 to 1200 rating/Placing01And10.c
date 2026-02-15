#include <stdio.h>

int main() 
{
	// your code goes here
	int t;
    scanf("%d",&t);

    while(t--)
    {
        int X,Y;
        scanf("%d %d",&X,&Y);

        if(X==Y)
            printf("%d\n",X+Y);
            
        else
        {
            int max=(X>Y?X:Y);
            printf("%d\n",2*max-1);
        }
    }

    return 0;

}

