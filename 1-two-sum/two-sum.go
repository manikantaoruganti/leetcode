package main

func twoSum(nums []int, target int) []int {
    seen := make(map[int]int) // Map to store numbers and their indices

    for i, num := range nums {
        complement := target - num
        if index, found := seen[complement]; found {
            return []int{index, i}
        }
        seen[num] = i
    }

    return nil 
}
