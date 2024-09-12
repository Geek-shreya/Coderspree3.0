long reverseBits(long n) {
    long rev = 0;
    int bit = 32; 
    while (n > 0) {
        rev = (rev << 1) | (n & 1);
        n = n >> 1;
        bit--;
    }
    rev = rev << bit;
    return rev;
}