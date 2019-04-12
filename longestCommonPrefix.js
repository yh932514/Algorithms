
/*
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
Example 1:
Input: ["flower","flow","flight"]
Output: "fl"
*/
/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    if(strs=="")
        return "";
    let res = "";
    let min=strs[0].length, a=0;
    for(let j=1; j<strs.length; j++){
        min = (min<strs[j].length)?min:strs[j].length;
    }
    while(a<min){
        for(let i=1; i<strs.length;i++ ){
            if(strs[0][a] !=strs[i][a])
                return res;
        }
        res+=strs[0][a];
        a++;
    } 
    return res;
};
