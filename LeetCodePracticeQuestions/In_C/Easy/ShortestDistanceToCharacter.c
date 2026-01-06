
int* shortestToChar(char* s, char c, int* returnSize) {
    int n = strlen(s);
    *returnSize = n;

    int* ans = (int*)malloc(n * sizeof(int));

    int last = -100000;  

    for (int i = 0; i < n; i++) {
        if (s[i] == c)
            last = i;
        ans[i] = i - last;
    }

    last = 100000;

    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == c)
            last = i;
        if (last - i < ans[i])
            ans[i] = last - i;
    }

    return ans;
}
