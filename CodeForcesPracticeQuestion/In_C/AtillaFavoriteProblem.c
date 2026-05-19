#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n);

        char s[101];
        scanf("%s",s);

        char mx='a';

        for(int i=0;i<n;i++)
        {
            if(s[i]>mx)
                mx=s[i];
        }

        printf("%d\n",mx-'a'+ 1);
    }

    return 0;
}
