#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int a[10];

        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        int maxProduct = 0;

        for (int i = 0; i < n; i++)
        {
            a[i]++;

            int product = 1;
            for (int j = 0; j < n; j++)
                product *= a[j];

            if (product > maxProduct)
                maxProduct = product;

            a[i]--; 
        }

        printf("%d\n",maxProduct);
    }

    return 0;
}
