public class count_digits{
    /**
     * @param n
     * @return
     */
    public static int countdigits(int n){
      int temp = n;
      int digit =0;
      int count =0;
      while(temp!=0){
          digit = temp%10;
          if(digit !=0 && n%digit ==0){
              count++;
          }
          temp=temp/10;
      }
      return count;
          }
      }