class Solution {
    public boolean containsDuplicate(int[] nums) {
      //creating a hash set
        HashSet<Integer>numbers = new HashSet<>();
        //run a loop on 0 index to nums.length 
        for(int i=0;i<nums.length;i++){
            if(numbers.contains(nums[i]))return true;
            numbers.add(nums[i]);
        
            //in java we have contains function it iteratively moves and discard means does not allow duplicates it will run only for non duplicate occurance
        }
            return false;
    }
}