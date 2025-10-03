#include <string>
class Solution {
public:
    bool isPalindrome(int x) {
        std::string num_str = std::to_string(x);
        std::string numr_str = "";
        for (int i = num_str.size() - 1; i >= 0; i--) {
            numr_str = numr_str + num_str[i];
        }
        if (num_str == numr_str) {
            return true;
        }
        return false;
    }
};
