class Solution {
    func twoSum(_ nums: [Int], _ target: Int) -> [Int] {
        var seen = [Int: Int]()  // Dictionary to store number and its index

        for (i, num) in nums.enumerated() {
            let complement = target - num
            if let j = seen[complement] {
                return [j, i]
            }
            seen[num] = i
        }

        return [] 
    }
}
