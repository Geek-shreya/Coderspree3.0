import java.util.Arrays;

public class maxmin

{
    static Pair getMinMax(long a[], long n)  
    {
        long maxim = 0;
        long minim = 0;
        Arrays.sort(a);
        maxim = a[(int)n-1];
        minim = a[0];
        return new Pair(minim,maxim);
    }
}