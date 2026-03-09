int minimumIndex(int* capacity, int capacitySize, int itemSize) 
{

    int minCap=101;
    int index=-1;

    for(int i=0;i<capacitySize;i++)
    {
        if(capacity[i]>=itemSize && capacity[i]<minCap)
        {
            minCap = capacity[i];
            index = i;
        }
    }

    return index;
    
}
