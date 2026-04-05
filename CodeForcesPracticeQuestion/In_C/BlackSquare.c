#include <stdio.h>

int main()
{
	// your code goes here
	
	int a1,a2,a3,a4;
	scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
	
	char str[100001];
	scanf("%s",str);
	
	int sum=0;
	for(int i=0;str[i]!='\0';i++)
	 {
	     if(str[i]=='1')
	      {
	          sum=sum+a1;
	      }
	      
	      else if(str[i]=='2')
	      {
	          sum=sum+a2;
	      }
	      
	      else if(str[i]=='3')
	      {
	          sum=sum+a3;
	      }
	      
	       else
	      {
	          sum=sum+a4;
	      }
	     
	 }
	 
	 printf("%d\n",sum);
	 
	 return 0;

}

