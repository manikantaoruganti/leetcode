/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    for(var i=0;i<nums.length;i++){
        for(var j=i+1;j<nums.length;j++){
            if(nums[j] == target - nums[i]){
                return [i,j];
            }
        }
    }
    throw new Error("no match found");
};
