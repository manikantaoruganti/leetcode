public class Solution {
    public bool ContainsNearbyDuplicate(int[] nums, int k) {
        var indexMap = new Dictionary<int, int>();

        for (int i = 0; i < nums.Length; i++) {
            int num = nums[i];

            if (indexMap.ContainsKey(num)) {
                // Check if the difference between indices is <= k
                if (i - indexMap[num] <= k) {
                    return true;
                }
            }
            // Update the latest index of the number
            indexMap[num] = i;
        }

        return false;
    }
}
