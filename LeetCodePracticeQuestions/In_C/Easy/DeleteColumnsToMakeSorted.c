int minDeletionSize(char **strs, int strsSize)
 {
    int cols=strlen(strs[0]);
    int deleteCount=0;

    for (int c=0;c<cols;c++)
     {
        for (int r = 1; r < strsSize; r++)
         {
            if (strs[r][c] < strs[r - 1][c]) 
            {
                deleteCount++;
                break;   // no need to check further rows
            }
        }
    }

    return deleteCount;
}
