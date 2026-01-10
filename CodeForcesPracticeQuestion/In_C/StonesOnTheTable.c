# include <stdio.h>

int main()
{
   int N;
   scanf("%d", &N);

   char str[N+1];
   scanf("%s",str);

    int count=0;
   for(int i=1;i<N;i++)
   {
     if(str[i]==str[i-1])
       count++;
   }

    printf("%d\n",count);
    return 0;
}
