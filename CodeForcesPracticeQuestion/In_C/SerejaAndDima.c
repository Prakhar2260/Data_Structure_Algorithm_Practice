#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[1000];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int left = 0;
    int right = n - 1;

    int sereja = 0;
    int dima = 0;

    int turn = 0;  

    while(left <= right)
    {
        int picked;

        if(arr[left] > arr[right])
        {
            picked = arr[left];
            left++;
        }
        else
        {
            picked = arr[right];
            right--;
        }

        if(turn == 0)
            sereja += picked;
        else
            dima += picked;

        turn = 1 - turn;  
    }

    printf("%d %d\n", sereja, dima);

    return 0;
}
