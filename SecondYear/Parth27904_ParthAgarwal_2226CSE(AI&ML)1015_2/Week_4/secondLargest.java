public class secondLargest {
public static int findSecondLargest(int n, int[] arr) {
 int largest = findLargest(n, arr);
 int ans = Integer.MIN_VALUE;

 for(int i = 0; i < n; i++){
  if(arr[i] < largest && arr[i] > ans){
   ans = arr[i];
  }
 }
 if(ans == Integer.MIN_VALUE){
  return -1;
 }
 return ans;
}

public static int findLargest(int n, int[] arr){
 int ans = Integer.MIN_VALUE;
 for(int i = 0; i <n; i++){
  if(arr[i] > ans){
   ans = arr[i];
  }
 }
 return ans;
}
}