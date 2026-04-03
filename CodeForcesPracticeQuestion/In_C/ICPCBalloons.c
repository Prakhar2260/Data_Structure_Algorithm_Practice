#include <stdio.h>

int main() 
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	int freq[26];
	
	while(t--)
    {
        for(int i=0;i<26;i++)
         {
             freq[i]=0;
         }
         
         int n;
         scanf("%d",&n);
         
         char str[n+1];
         scanf("%s",str);
         
         for(int i=0;str[i]!='\0';i++)
           {
               freq[str[i]-'A']++;
           }
        
          int sum=0;
          
           for(int i=0;i<26;i++)
            {
                if(freq[i]!=0)
                 sum=sum+freq[i]+1;
            }
            
            printf("%d\n",sum);
    }
    
    return 0;

}

