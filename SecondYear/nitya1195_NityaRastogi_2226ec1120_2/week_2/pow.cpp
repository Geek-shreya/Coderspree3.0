double myPow(double x, int n) {
    // Write Your Code Here
    double r=1.0;
    if(n<0)
    {
        n=n*(-1);
        x=1/x;
    }
    for(int j=0;j<n;j++)
    {
        r =r*x;
    }
    return r;

}