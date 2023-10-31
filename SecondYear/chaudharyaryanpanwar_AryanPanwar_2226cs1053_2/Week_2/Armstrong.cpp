bool checkArmstrong(int n){
	//Write your code here
	int temp = n;
	int len = 0 ; 
	while (temp!=0){
		temp = temp/10;
		len++;
	}
	temp = n;
	int sum = 0 ; 
	while (temp != 0){
		sum += pow(temp%10 , len);
		temp = temp/10;

		}
	return sum==n ;
}
