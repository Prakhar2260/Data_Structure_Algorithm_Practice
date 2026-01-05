#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) 
    {
        int N;
        char B[121];
        scanf("%d",&N);
        scanf("%s", B);

        int present=0;

        for (int i = 0; i < N; i++)
        {
            if (B[i] == '1')
                present++;
        }

        int remaining_days = 120 - N;
        
        int max_attendance = present + remaining_days;

        if (max_attendance >= 90)
            printf("YES\n");
            
        else
            printf("NO\n");
    }

    return 0;
}
