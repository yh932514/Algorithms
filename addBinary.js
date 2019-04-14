/*
Given two binary strings, return their sum (also a binary string).

The input strings are both non-empty and contains only characters 1 or 0.

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
*/
/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var mark=0;
var addBinary = function(a, b) {
    var min=(a.length<=b.length) ? a.length: b.length; 
    var res=(a.length>=b.length) ? a:b;
    var i=a.length-1, j=b.length-1, z=res.length-1;
    
    while(min>0){
        if(a[i]=='1' && b[j]=='1'){
            
            res=(mark == 1) ? replaceAt(res,z,'1') : replaceAt(res,z,'0');
            mark = 1;
        }
        else if(a[i]=='0'&&b[j]=='0'){
            res= (mark==1) ? replaceAt(res,z,'1'):replaceAt(res,z,'0');
            mark=0;}
        else if((a[i]=='0'&&b[j]=='1') || (a[i]=='1'&&b[j]=='0'))
                res=(mark==1) ? replaceAt(res,z,'0'):replaceAt(res,z,'1'); 
        min--;
        i--; 
        j--; 
        z--;
    }
    if(a.length != b.length)
        res=(a.length > b.length)?rest(a,res,a.length-b.length):rest(b,res,b.length-a.length);
   
    return (mark == 1)? '1'.concat(res):res;
};
function replaceAt(string, index, replace) {
  return string.substr(0, index) + replace+ string.substr(index + 1);
}
function rest(longs,res,pos){
    for(var i=pos-1; i>=0; i--){
        if(longs[i]=='1' && mark ==1)
            res=replaceAt(res,i,'0')
        else if(longs[i]=='0' && mark ==1){
            res=replaceAt(res,i,'1');
            mark = 0;}
    }
    return res;
}
