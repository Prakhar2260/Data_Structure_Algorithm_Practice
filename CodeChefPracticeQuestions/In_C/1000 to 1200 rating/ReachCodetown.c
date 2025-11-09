#include <stdio.h>

int isVowel(char ch) 
{
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int main() 
{
	// your code goes here
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	  char s[9];
	  scanf("%s",&s);
	  
	  char s1[8]="CODETOWN";
	  
	  int c=0;
	  for(int i=0;i<8;i++)
	   {
	     int v1=isVowel(s[i]);
	     int v2=isVowel(s1[i]);
	       if(v1!=v2)
	       {
	         c=1;
	         break;
	       }
	      
	   }
	   
	   if(c==1)
	   printf("NO\n");
	   
	   else
	   printf("YES\n");
	}
	
	return 0;

}

