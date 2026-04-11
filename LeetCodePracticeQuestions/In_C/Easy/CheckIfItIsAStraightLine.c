bool checkStraightLine(int** coordinates, int coordinatesSize, int* coordinatesColSize) 
{
    int x0=coordinates[0][0];
    int y0=coordinates[0][1];

    int dx=coordinates[1][0]-x0;
    int dy=coordinates[1][1]-y0;

    for(int i=2;i<coordinatesSize;i++)
    {
        int x=coordinates[i][0];
        int y=coordinates[i][1];

        if(dx*(y-y0) != dy*(x-x0))
            return false;
    }

    return true;
    
}
