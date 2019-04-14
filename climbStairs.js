/*
You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Note: Given n will be a positive integer.

Example 1:

Input: 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
*/
/*
Runtime: 56 ms, faster than 99.74% of JavaScript online submissions for Climbing Stairs.
*/
/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function(n) {
    var ways=1, i=0, pos=n; 
    while(n>=2){
        pos--;
        n-=2;
        i++;
        ways+=factorial(pos, pos-i+1)/factorial(i,1);
    }
    return ways;
};
function factorial(a, b){
    var res=1;
    for(var i=a; i>=b; i--){
        res*=i;
    }
    return res;
}
