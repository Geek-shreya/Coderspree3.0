int countDigits(int n){
	// Write your code here.
	 int val = n; 
    int count = 0;

    while (n > 0) {
        int rem = n % 10; 
        if (rem != 0 && val % rem == 0) {
            count++; 
        }
        n /= 10;
    }
    return count;	
}