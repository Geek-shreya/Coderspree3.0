string reverseWord(string str)
    {
        // Your code goes here
        int left = 0 ; 
        int right = str.length()-1;
        while(left<right){
            swap(str[left], str[right]);
            left++;
            right--;
        }
        return str;
    }