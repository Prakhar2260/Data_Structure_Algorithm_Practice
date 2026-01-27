
char* sortString(char* s)
{
    int freq[26] = {0};
    int n = strlen(s);

    for (int i = 0; i < n; i++)
        freq[s[i] - 'a']++;

    char* res = (char*)malloc(n + 1);
    int idx = 0;

    while (idx < n)
    {
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 0)
            {
                res[idx++] = i + 'a';
                freq[i]--;
            }
        }

        for (int i = 25; i >= 0; i--)
        {
            if (freq[i] > 0)
            {
                res[idx++] = i + 'a';
                freq[i]--;
            }
        }
    }

    res[idx] = '\0';
    return res;
}
