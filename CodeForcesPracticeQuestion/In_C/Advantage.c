#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];

        int max1=-1;
        int max2=-1;
        int countMax=0;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);

            if(arr[i]>max1)
            {
                max2=max1;
                max1=arr[i];
                countMax=1;
            }
            
            else if(arr[i]==max1)
            {
                countMax++;
            }
            
            else if(arr[i]>max2)
            {
                max2=arr[i];
            }
        }

        for(int i=0;i<n;i++)
        {
            if(arr[i]==max1)
            {
                if(countMax>1)
                    printf("0 ");
                    
                else
                    printf("%d ",arr[i]-max2);
            }
            else
            {
                printf("%d ",arr[i]-max1);
            }
        }

        printf("\n");
    }

    return 0;
}
