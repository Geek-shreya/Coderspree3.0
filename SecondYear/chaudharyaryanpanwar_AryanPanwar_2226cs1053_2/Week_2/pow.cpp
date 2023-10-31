double myPow(double x, int n) {
    double ans = 1.0;
    bool isNegative = false;
    if(n < 0) {
        isNegative = true;
        n = -n;
    }
    while(n > 0) {
        if(n % 2 == 0) {
            n /= 2;
        }
        else {
            ans = ans * x;
            n /= 2;
        }
        x = x * x;
    }
    if(isNegative) {
        ans = 1.0 / ans;
    }
    
    return ans;
}