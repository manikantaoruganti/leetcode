#include <stdexcept>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if (k < 0) {
            throw invalid_argument("k cannot be negative");
        }
        
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j <= i + k && j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        
        return false;
    }
};
