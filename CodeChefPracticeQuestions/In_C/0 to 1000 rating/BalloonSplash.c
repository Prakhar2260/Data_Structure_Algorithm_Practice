#include <stdio.h>

int main()
{
	// your code goes here
	int X, Y;
    scanf("%d %d", &X, &Y);

    if (X > Y)
        printf("Alice");
    else if (Y > X)
        printf("Bob");
    else
        printf("Draw");

    return 0;

}

