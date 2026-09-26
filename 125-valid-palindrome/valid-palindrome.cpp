class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) {
            return !isalnum(c);
        }), s.end());
        bool ispal = true;
        for (int i = 0, j = s.size()-1; i < j; i++, j--){
            if (tolower(s[i]) != tolower(s[j])){
                ispal = false;
                break;
            }
        }
        return ispal;
    }
};