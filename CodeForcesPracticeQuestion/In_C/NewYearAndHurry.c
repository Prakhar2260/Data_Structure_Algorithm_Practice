# include <stdio.h>

int main()
{
    int n ,k;
    scanf("%d %d",&n,&k);

    int timeLeft = 240 - k;
    int count = 0;

    int i=1;
    while(timeLeft>0 && i<=n)
     {
        timeLeft = timeLeft - (5*i);
        if(timeLeft>=0)
           count++;
        i++;
     }

     printf("%d\n",count);


    return 0;
}
