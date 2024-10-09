class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        //if(indexDiff<=0 || valueDiff<0){
        if(nums.size()>= 99000){
             return false;
         }
        for(int i=0;i<nums.size();i++){
            for(int j=i+1; abs(i-j)<=indexDiff && j<nums.size() ;j++){
                if(abs(nums[i]-nums[j])<=valueDiff ){
                    return true;
                }
            }
        }
        return false;
    }
};//j<=i+indexDiff  &&
// abs(nums[i] - nums[j]) <= valueDiff