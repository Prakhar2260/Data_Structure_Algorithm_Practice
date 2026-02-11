# include <stdio.h>
# include <math.h>
int main()
 {
    int t;
    scanf("%d",&t);

    while(t--)
     {
       int n;
       scanf("%d",&n);

       int nonzero=0;
       int num=n;

       while(num>0)
        {
           int rem=num%10;

           if(rem!=0)
            {
              nonzero++;
            }
             
           num=num/10; 
        }

         printf("%d\n",nonzero);

         int num1=n;
         int power=1;
         while(num1>0)
          {

             int rem=num1%10;

             if(rem!=0)
             { 
              printf("%d ",rem*power);
             }
             power=power*10;
             num1=num1/10;
          }

          printf("\n");

     }

     return 0;
 }
