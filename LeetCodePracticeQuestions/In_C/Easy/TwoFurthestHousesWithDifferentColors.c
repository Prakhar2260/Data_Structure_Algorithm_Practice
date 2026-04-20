int maxDistance(int* colors, int colorsSize)
 {
     int maxDist=0;

    for (int j=colorsSize-1;j>= 0;j--)
     {
        if(colors[j]!=colors[0])
         {
            maxDist=j;
            break;
        }
    }

    for (int i=0;i<colorsSize;i++)
     {
        if(colors[i]!=colors[colorsSize-1])
         {
            int dist=(colorsSize-1)-i;
            if(dist>maxDist)
             {
                maxDist=dist;
            }
            break;
        }
    }

    return maxDist;
    
}
