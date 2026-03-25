# include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);

   int ar[n];
   for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    int one=0,two=0,three=0;

    for(int i=0;i<n;i++)
     {
        if(ar[i]==1)
         one++;

         else if(ar[i]==2)
          two++;

         else
           three++; 
     }

     if(one==0 || two==0 || three==0)
      {
        printf("0\n");
        return 0;
      }

      int w=one;
      if(two<w) w=two;
      if(three<w) w=three;

    printf("%d\n", w);

      for(int i=0;i<w;i++)
       {
        int f1=0;
        int f2=0;
        int f3=0;
        for(int j=0;j<n;j++)
          {
            if(ar[j]==1 && f1==0)
             {
               printf("%d ",j+1);
               ar[j]=0;
               f1=1;
             }

             else if(ar[j]==2 && f2==0)
             {
               printf("%d ",j+1);
               ar[j]=0;
               f2=1;
             }

             else if(ar[j]==3 && f3==0)
             {
               printf("%d ",j+1);
               ar[j]=0;
               f3=1;
             }
          }

          printf("\n");
       }

       return 0;
}
