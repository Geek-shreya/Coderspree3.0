public class Palindromenumber{
    public static boolean palindromeNumber(int n){
        int reverse =0;
        // int temp =n; 
        int r;
        while(n>0){
            r= n%10;
            reverse= reverse*10+r;
            
            n=n/10;
        }
        if( n<10){
            return true;
        }
        else{
        return false;
        }
    }
}
