class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> count(101, 0);  // Count of each number from 0 to 100

        // Count occurrences of each number
        for (int num : nums) {
            count[num]++;
        }

        // Build prefix sums so that count[i] tells how many numbers are < i
        for (int i = 1; i < 101; i++) {
            count[i] += count[i - 1];
        }

        // Build the result using prefix sums
        vector<int> result;
        for (int num : nums) {
            if (num == 0)
                result.push_back(0);
            else
                result.push_back(count[num - 1]);
        }

        return result;
    }
};
