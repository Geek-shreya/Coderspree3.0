public class encoding {
	public static String encode(String message) {

		StringBuilder ans = new StringBuilder();

		char[] arr = message.toCharArray();

		int i = 0, j = 0;
		
		while(i < message.length() && j < message.length()){
			int count = 0;
			
			while(j < message.length() && arr[i] == arr[j]){
				j++;
				count++;
			}
			
			ans.append(arr[i]).append(count);
			
			i = j;
		}

		return ans.toString();
		
	}
}