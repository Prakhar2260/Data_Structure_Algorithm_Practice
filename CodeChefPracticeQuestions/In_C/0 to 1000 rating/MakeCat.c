#include <stdio.h>

int main() 
{
	// your code goes here
	
	char s[4];   
    scanf("%s",s);

    int has_c=0,has_a=0,has_t=0;

    for(int i = 0; i < 3; i++)
    {
        if(s[i]=='c')
        has_c=1;
        
        if(s[i]=='a')
        has_a=1;
        
        if(s[i]=='t')
        has_t=1;
    }

    if(has_c && has_a && has_t)
        printf("YES");
        
    else
        printf("NO");

    return 0;

}

