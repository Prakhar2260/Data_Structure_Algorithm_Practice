int hammingDistance(int x, int y) {
    int n = x ^ y;   // bits that differ
    int count = 0;
    
    while (n > 0) {
        if (n & 1)   // check last bit
            count++;
        n >>= 1;     // shift right
    }
    
    return count;
}
