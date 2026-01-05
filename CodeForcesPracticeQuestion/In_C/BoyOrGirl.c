#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    int freq[26] = {0};
    int distinct = 0;

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
      {
        int idx = s[i] - 'a';
        if (freq[idx] == 0) 
        {
            freq[idx] = 1;
            distinct++;
        }
    }

    if (distinct % 2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");

    return 0;
}
