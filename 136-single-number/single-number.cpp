class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single_number_occured_in_nums=0;
        for(int i=0;i<nums.size();i++){
           single_number_occured_in_nums ^= nums[i];
        }
       return  single_number_occured_in_nums;
    }
};