int countDigits(int n){
	// Write your code here.
	int count = 0 ; 	
	int temp  = n ;
	int len = 0 ;
	while (temp != 0){
		temp /= 10;
		len++;
	}
	temp = n ; 
	int last_digit;
	int factor;
	for (int i = 0 ; i< len ; i++){
		last_digit = temp%10; 
		if (last_digit == 0)count = count;
		else if (n%last_digit==0)
		{
			count++;
		}
		temp = temp/10;
	}
	return count;
}