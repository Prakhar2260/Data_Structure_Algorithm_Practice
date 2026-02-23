# include <stdio.h>

int main()
{
  int q;
    scanf("%d",&q);

    while(q--)
    {
       int n;
       scanf("%d",&n);
 
       char s[40]; 
       char t[40];
       scanf("%s %s",s,t);

       int freq1[26];
       int freq2[26];

       for(int i=0;i<26;i++)
       {
          freq1[i]=0;
          freq2[i]=0;
       }

         for(int i=0;i<n;i++)
         {
             freq1[s[i]-'a']++;
             freq2[t[i]-'a']++;
         }

         int c=1;

         for(int i=0;i<26;i++)
         {
                if(freq1[i]!=freq2[i])
                {
                    c=0;
                    break;
                }
            }
    
            if(c==1)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
    }

    return 0;


}
