# include <stdio.h>

int main()
{
    int k,r;
    scanf("%d %d",&k,&r);

    int i=1;
    while(1)
     {
        int price = k*i;
        if((price%10)==0 || (price%10)==r)
           break;
        i++;
     }

     printf("%d\n",i);
}
