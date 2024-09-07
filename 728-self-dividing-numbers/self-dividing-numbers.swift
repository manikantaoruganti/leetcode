class Solution {
    func selfDividingNumbers(_ left: Int, _ right: Int) -> [Int] {
        var result: [Int] = []
        
        for num in left...right {
            if isSelfDividing(num) {
                result.append(num)
            }
        }
        
        return result
    }
    
    private func isSelfDividing(_ num: Int) -> Bool {
        var originalNum = num
        var num = num
        
        while num > 0 {
            let digit = num % 10
            if digit == 0 || originalNum % digit != 0 {
                return false
            }
            num /= 10
        }
        
        return true
    }
}
