#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) 
    {
        char s[6];
        scanf("%s",s);

        int countA=0, countB=0;

        for (int i = 0; i < 5; i++)
        {
            if (s[i]=='A')
                countA++;
            else
                countB++;
        }

        if(countA>countB)
            printf("A\n");
        else
            printf("B\n");
    }

    return 0;
}
