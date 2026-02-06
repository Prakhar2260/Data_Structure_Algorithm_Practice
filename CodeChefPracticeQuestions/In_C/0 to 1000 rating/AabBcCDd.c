#include <stdio.h>
# include <ctype.h>

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	  int N;
	  scanf("%d",&N);
	  
	  char str[N+1];
	  scanf("%s",str);
	  
	  char ch;
	  
	  for(int i=0;i<N;i++)
	   {
	     ch=str[i];
	     
	     if(isupper(ch))
	       str[i]=tolower(ch);
	   }
	  
	  int freq[26];
	  
	  for(int j=0;j<26;j++)
	    freq[j]=0;
	    
	  for(int i=0;i<N;i++)
	   {
	    freq[str[i]-97]++;    
	   }
	   
	   int maxfreq1=0;
	   int index=0;
	   for(int i=0;i<26;i++)
	     {
	       if(maxfreq1<freq[i])
	         {
	            maxfreq1=freq[i];
	            index=i;
	         }
	     }
	     
	     freq[index]=0;
	     
	     int maxfreq2=0;
	    index=0;
	   for(int i=0;i<26;i++)
	     {
	       if(maxfreq2<freq[i])
	         {
	            maxfreq2=freq[i];
	            index=i;
	         }
	     }
	     
	     
	    printf("%d\n", maxfreq1 + maxfreq2); 
	  
	    
	}
	
	return 0;

}

