public class firstPositive {
	public static int firstMissing(int[] arr, int n) {

// Write your code here.

        int i=0;

        while(i<n){

            while(arr[i]!=i){

                if(arr[i]<0||arr[i]>=n||arr[arr[i]]==arr[i])break;

                int temp = arr[arr[i]];

                arr[arr[i]]=arr[i];

                arr[i]=temp;

            }

        i++;

        }

 

        for(int j=1;j<n;j++){

            if(arr[j]!=j){

                return j;

            }

        }

 

if(arr[0]==n)return n+1;

return n;

}
}
