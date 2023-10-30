int traffic(int n, int m, vector<int> vehicle) {
	// Write your code here.
	int left = 0 ; 
	int right = 0 ; 
	int count = 0 ; 
	int maxOnes = 0 ;
        for (int i = 0; i < n; i++) {
			count = 0 ;
          for (int j = i; count<=5 && j<n; j++) {
			  if (vehicle[j]==0)count++;
			  else continue;
			  if ((j-i)<maxOnes)maxOnes = j-i;
		  }
        }
		return maxOnes;
		
}
