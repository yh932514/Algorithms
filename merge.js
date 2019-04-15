/*
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:

The number of elements initialized in nums1 and nums2 are m and n respectively.
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2.
Example:

Input:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

Output: [1,2,2,3,5,6]
*/
/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function(nums1, m, nums2, n) {
    var i=0, j=0; //i for nums1, j for nums2 
    var pre = 0, cru = 0;
    while(m<nums1.length){
        if(nums1[i]>=nums2[j]){
            pre = nums1[i];
            nums1[i]=nums2[j]; 
            for(var a=i+1; a<=m; a++){
                cur = nums1[a];
                nums1[a] = pre; 
                pre = cur;
            }            
            m++;
            j++;
        }
        if(i==m && j<n){
            nums1[i]=nums2[j];
            m++;
            j++;
        }
        i++;
    }
};
