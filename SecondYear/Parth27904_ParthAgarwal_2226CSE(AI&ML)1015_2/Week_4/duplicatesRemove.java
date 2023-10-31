import java.util.* ;
import java.util.Collections;

public class duplicatesRemove {

    public static int removeDuplicates(ArrayList<Integer> arr,int n) {


        Collections.sort(arr);

        int i=0;

        while (i < n - 1) {

            if (arr.get(i).equals(arr.get(i + 1))) {

                arr.remove(i + 1);

                n--;

            } else {

                i++;

            }

        }

        return arr.size();

    }

}
