vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector <int> result(n);
    if (n==0)return result; 
    int a= 0 ;
    int b =1;
    result.push_back(0);
    if (n==1)return result;
    result.push_back(1);
    if (n==2)return result;
    int sum = 0 ;
    for (int i = 1; i < n - 1; i++) {
    sum = a+b;
    result.push_back(sum);
    a = b;
    b = sum;
    }
    return result;
}