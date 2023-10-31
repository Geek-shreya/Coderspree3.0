vector<long long> factorialNumbers(long long n) {
    //Write your code here
    long long ans = 1;
    long long count = 1;
    vector<long long> result;
    
    while(ans <= n / count) {
        ans *= count;
        count++;
        result.push_back(ans);
    }
    
    return result;
}