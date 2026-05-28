#include <stdio.h>

int main() 
{
	// your code goes here
	
	int a,b;
	scanf("%d %d",&a,&b);
	
	int diff=a-b;
	
	int lastdigit=diff%10;
	
	if(lastdigit<9)
	printf("%d",diff+1);
	
	else
	printf("%d",diff-1);
	
	return 0;

}

