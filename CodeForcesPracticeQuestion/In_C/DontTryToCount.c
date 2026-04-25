#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);

        char x[2000],s[1000];
        scanf("%s",x);
        scanf("%s",s);

        int operations=0;
        int found=0;

    
        while(strlen(x)<m)
        {
            strcat(x,x);
            operations++;
        }

        
        for(int i=0;i<3; i++)
        {
            if(strstr(x,s)!=NULL)
            {
                printf("%d\n",operations);
                found = 1;
                break;
            }

            char temp[5000];
            strcpy(temp,x);
            strcat(x,temp);
            operations++;
        }

        if(!found)
        {
           printf("-1\n");
        }
    }

    return 0;
}
