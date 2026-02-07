# include <stdio.h>
# include <string.h>
# include <ctype.h>

int main()
{
   char word[1001];
   fgets(word, 1001, stdin);

   int count=0;

   for(char ch='a';ch<='z';ch++)
     {
       if(strchr(word,ch)!=NULL)
         {
            count++;
         }
     }

     printf("%d\n",count);
   return 0; 
}
