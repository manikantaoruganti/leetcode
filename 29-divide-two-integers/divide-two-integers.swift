class Solution {
    func divide(_ dividend: Int, _ divisor: Int) -> Int {
        let INT_MAX = Int(Int32.max)
        let INT_MIN = Int(Int32.min)
        
        // Handle overflow case
        if dividend == INT_MIN && divisor == -1 {
            return INT_MAX
        }
        
        // Perform division truncating toward zero
        return dividend / divisor
    }
}
