import java.util.Scanner;

class reverseWords {

    static String reverseStringWordWise(String input) {


        String str[] = input.split(" ");

        String s = "";

        for(int i = str.length - 1; i >= 0; i--){

            s+= (str[i] + " ");

        }

        return s;

    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        String ans = reverseStringWordWise(input);
        System.out.println(ans);
        sc.close();
    }
}