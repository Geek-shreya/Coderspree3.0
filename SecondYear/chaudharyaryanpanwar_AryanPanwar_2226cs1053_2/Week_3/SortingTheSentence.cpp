class Solution {
public:
    string sortSentence(string s) {
        vector <string> v(10);
        string word ;
        int k = 0 ; 
        int n;
        int max = 0 ;
        for (int i = 0 ; i<s.length() ; i++){
            if (s[i]!=' '&& isdigit(s[i])!=true){
                word += s[i];
            }
            else if (isdigit(s[i])){
                n = (int)s[i] - 48;
                if (max<n)max = n;
                v[n] = word;
                word.clear();
            }
            else{
                continue;
            }
        }
        s.clear();
        for (int i = 0 ; i<=max ;i++ ){
            s += v[i];
            if (i>0 && i<max)s+=' ';
            
        }
        return s;
    }
};