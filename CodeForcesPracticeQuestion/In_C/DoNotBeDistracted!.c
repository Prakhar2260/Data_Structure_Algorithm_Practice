#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--) 
    {
        int n;
        scanf("%d",&n);

        char s[55];
        scanf("%s",s);

        int visited[26]={0};
        int flag=1;

        visited[s[0]-'A']=1;

        for (int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
            continue;

            if(visited[s[i]-'A'])
            {
                flag=0;
                break;
            }

            visited[s[i]-'A']=1;
        }

        if(flag) 
        printf("YES\n");
        
        else
        printf("NO\n");
    }

    return 0;
}
