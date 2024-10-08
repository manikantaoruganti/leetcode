class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer>result=new HashSet<>();
        for(int i=0;i<nums.length;i++){
            if(result.contains(nums[i]))
                return true;
                
                                         
            result.add(nums[i]);
        }
        return false;
        
    }
}