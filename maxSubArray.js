/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
Example:
Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
*/
/*
Runtime: 64 ms, faster than 98.11% of JavaScript online submissions for Maximum Subarray.
Memory Usage: 35.1 MB, less than 80.55% of JavaScript online submissions for Maximum Subarray.
*/
/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    var sum=0, temp=0, j=0, maxnum=nums[0]; 
    for(var i=0; i<nums.length; i++){
        temp+=nums[i];
        if(temp>sum)
            sum = temp;
        else if(temp<0){
            temp=0;
            maxnum = (maxnum>nums[i]) ? maxnum : nums[i];
            j++;}
    }
    if(j==nums.length){     //all negative numbers
        return maxnum;
    }
    return sum;
};
