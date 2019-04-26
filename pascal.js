/* Pascal's Triangle
Example:

Input: 5
Output:
[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]
*/
//Runtime: 56 ms, faster than 99.95% of JavaScript online submissions for Pascal's Triangle.
/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function(numRows) {
    var number = [];
        for(var x = 0; x < numRows; x++){
            number[x] = [];    
            for(var y = 0; y < x; y++){ 
                number[x][y] = [];    
            }    
        }

    for(var i=1; i<=numRows; i++){
        number[i-1][0]=1;
        if(i!=1){
            var j=2;
            while(j<i){
            number[i-1][j-1]=number[i-2][j-1]+number[i-2][j-2];
            j++;}
        number[i-1][i-1]=1;
        }
    }
    return number;
};
