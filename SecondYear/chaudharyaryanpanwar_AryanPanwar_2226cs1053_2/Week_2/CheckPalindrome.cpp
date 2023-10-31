bool palindrome(int n)
{
    // Write your code here
    string str = to_string(n);
    int len  = str.length();
    int left = 0 ;
    int right = len-1;
    while (left<=right){
        
        if (str[left]!=str[right]){
            
            return false;
        }
        left++;
        right--;
    }
    return true;
}