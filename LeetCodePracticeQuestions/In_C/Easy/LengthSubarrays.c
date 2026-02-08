int sumOddLengthSubarrays(int* arr, int arrSize) 
{
    int total=0;

    for(int i=0;i<arrSize;i++)
     {
        int totalSubarrays=(i+1)*(arrSize-i);
        int oddSubarrays=(totalSubarrays+1)/2;
        total += arr[i]*oddSubarrays;
    }

    return total;
    
}
