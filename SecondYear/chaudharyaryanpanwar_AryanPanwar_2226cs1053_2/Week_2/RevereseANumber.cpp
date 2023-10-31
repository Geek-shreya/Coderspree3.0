long reverseBits(long n){
    long result = 0;

    for(int i=0;i<32;i++){
        int j = n & (1<<i);
        if (j>0)result += (long)1<<(31-i);
    }  
    return result;
}