# include <stdio.h>
# include <string.h>

int main()
{
   int t;
   scanf("%d",&t);
   
   while(t--)
   {
     char str[4];
        scanf("%s",str);

      char temp[4];
      
      for(int i=0;i<3;i++)
        {
           temp[i]=toupper(str[i]); 
        }

         temp[3]='\0';

       if(strcmp(temp,"YES")==0)
        {
           printf("YES\n"); 
        } 

        else
        {
           printf("NO\n"); 
        }
   }

   return 0;
}
