#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int n = nums.size();
        for (int a = 0; a < n; a++) {
            int com = target - nums[a];
            for (int b = a + 1; b < n; b++) {
                if (nums[b] == com) {
                    return {a, b};
                }
            }
        }
        return {};
    }
};
