class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
          int sum_of_squares_of_all_special_elements=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
           
            if(n%(i+1)==0){
                sum_of_squares_of_all_special_elements = sum_of_squares_of_all_special_elements + (nums[i]*nums[i]);
            }
           
        
        }
        return sum_of_squares_of_all_special_elements;
    }
};