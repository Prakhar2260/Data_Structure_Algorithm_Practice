int oddCells(int m, int n, int** indices, int indicesSize, int* indicesColSize) {
    int row[m], col[n];
    
    
    for (int i = 0; i < m; i++) row[i] = 0;
    for (int j = 0; j < n; j++) col[j] = 0;

    
    for (int i = 0; i < indicesSize; i++) {
        int r = indices[i][0];
        int c = indices[i][1];
        row[r]++;
        col[c]++;
    }

    
    int oddRows = 0, oddCols = 0;

    for (int i = 0; i < m; i++)
        if (row[i] % 2 == 1)
            oddRows++;

    for (int j = 0; j < n; j++)
        if (col[j] % 2 == 1)
            oddCols++;

    
    return oddRows*(n-oddCols)+(m-oddRows)*oddCols;
}
