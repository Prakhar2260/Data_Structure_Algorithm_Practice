
int isVowel(char c)
{
    c=tolower(c);
    return (c=='a'||c=='e'||c=='i'||c=='o'|| c=='u');
}

char* reverseVowels(char* s)
{
    int i=0;
    int j=strlen(s)-1;

    while(i<j)
    {
        while(i<j&&!isVowel(s[i]))
            i++;

        while(i<j&&!isVowel(s[j]))
            j--;

        if(i<j)
        {
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;

            i++;
            j--;
        }
    }

    return s;
}
