#include <stdio.h>

int main()
{
    int A,B;
    
    scanf("%d %d",&A,&B);

    int totalSlices=(A+1)*4+B*3;
    int pizzas=(totalSlices+7)/8;

    printf("%d\n",pizzas);

    return 0;
}
