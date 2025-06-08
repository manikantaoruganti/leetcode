class Solution {
    func stableMountains(_ height: [Int], _ threshold: Int) -> [Int] {
        var stableIndices: [Int] = []
        
        for i in 1..<height.count {
            if height[i - 1] > threshold {
                stableIndices.append(i)
            }
        }
        
        return stableIndices
    }
}
