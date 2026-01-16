# include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int anton=0,danik=0;

    char sr[n+1];
    scanf("%s",sr);

    for(int i=0;i<n;i++)
     {
        if(sr[i]=='A')
          anton++;

        else 
          danik++;

     }

     if(anton==danik)
        printf("Friendship\n");

     else if(anton>danik)
        printf("Anton\n");
        
     else
        printf("Danik\n");   

    return 0;
}
