int singleNumber(int* nums, int numsSize) {
    int ans =0;
    int i;
    
    for(i=0;i<numsSize;i++)

    
    
         ans^= nums[i];
    
    return ans;
}