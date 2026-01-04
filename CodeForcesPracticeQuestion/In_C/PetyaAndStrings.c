# include <stdio.h>
#include <string.h>
# include <ctype.h>

int main()
{
  char S1[101];
  char S2[101];

  scanf("%s",S1);
  scanf("%s",S2);

  int len=strlen(S1);
  
  for(int i=0;i<len;i++)
    {
       char ch1=tolower(S1[i]);
       char ch2=tolower(S2[i]);
       
       if(ch1==ch2)
        {
           continue;
        }

       else if(ch1 < ch2)
        {
           printf("-1\n");
           return 0;
        }
       
       else
        {
           printf("1\n");
           return 0;
        }
    }

    printf("0\n");
  return 0;
}
