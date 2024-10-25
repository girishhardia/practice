class Solution {
public:
    bool isPalindrome(std::string s) {
        s.erase(std::remove_if(s.begin(), s.end(), [](char c) { return !std::isalnum(c); }), s.end());
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);

        // Check palindrome
        int high = s.size() - 1;
        int low = 0;
        while (high >= low) {
            if (s[low] != s[high]) {
                return false;
            }
            high -= 1;
            low += 1;
        }
        return true;
    }
};
