#include <stdio.h>

int main()
{
	// your code goes here

   int t;
   scanf("%d",&t);
   
   while(t--)
   {
       int a,b,c,d;
       scanf("%d %d %d %d",&a,&b,&c,&d);
       
       if(a==b && c==d)
       {
         printf("YES\n");
         continue; 
       } 
       
       else if(a==c && b==d)
       {
         printf("YES\n");
         continue; 
       } 
       
       else if(a==d && c==b)
       {
         printf("YES\n");
         continue; 
       } 
       
       else
       {
           printf("NO\n");
       }
   }
   
   return 0;
}

