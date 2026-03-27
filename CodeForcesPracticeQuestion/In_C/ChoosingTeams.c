# include <stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);

    int array[n];
    for(int i=0;i<n;i++)
     {
        scanf("%d",&array[i]);
     }

     int count=0; 
     for(int i=0;i<n;i++)
      {
        if(array[i]+k<=5)
         {
            count++;
         }
      }

      printf("%d\n",count/3);

      return 0;
}
