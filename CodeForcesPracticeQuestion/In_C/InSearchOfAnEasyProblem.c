# include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);

   int array[n];
   for(int i=0;i<n;i++)
      scanf("%d",&array[i]);
      
       int c=1;
    for(int i=0;i<n;i++)
      {
        if(array[i]==1)
         {
           c=0;
           break; 
         }
      }  

    if(c)
     {
       printf("EASY\n"); 
     }

     else
     {
       printf("HARD\n"); 
     }

     return 0;

}
