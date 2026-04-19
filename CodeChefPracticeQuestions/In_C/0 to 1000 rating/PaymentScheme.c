#include <stdio.h>

int main() 
{
    int X;
    scanf("%d", &X);

    int scheme1=100+4*X;
    int scheme2=300;

    if(scheme1<scheme2)
        printf("%d",scheme1);
        
    else
        printf("%d",scheme2);

    return 0;
}
