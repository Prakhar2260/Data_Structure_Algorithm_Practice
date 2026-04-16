#include <stdio.h>

int main() 
{
    char A[5]; 
    scanf("%s", A);

    if (A[0]=='s' || A[3]=='s')
    {
        printf("Yes\n");
    }
    
    else 
    {
        printf("No\n");
    }

    return 0;
}
