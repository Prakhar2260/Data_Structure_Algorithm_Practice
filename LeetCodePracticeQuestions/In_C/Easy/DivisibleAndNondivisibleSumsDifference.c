int differenceOfSums(int n, int m) 
{
     long long total=(long long)n*(n+1)/2;
    long long k=n/m;    
    long long sumMultiples=(long long)m*k*(k+1)/2;

    return total-2*sumMultiples;
    
}
