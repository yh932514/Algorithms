/*
Given a roman numeral, convert it to an integer. Input is guaranteed to be within the range from 1 to 3999.
*/
/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    let res = 0, i=0;
    while(i<s.length){
        let a = s[i]
        if(a == 'I'){
            if(s[i+1]=='V')
            { res+=4;
              i++;}
            else if(s[i+1]=='X')
            {   res+=9;
                i++;}
            else
                res+=1;
        }
        else if(a == 'X'){
            if(s[i+1]=='L')
            { res+=40;
              i++;}
            else if(s[i+1]=='C')
            {   res+=90;
                i++;}
            else
                res+=10;
        }
        else if(a == 'C'){
            if(s[i+1]=='D')
            { res+=400;
              i++;}
            else if(s[i+1]=='M')
            {   res+=900;
                i++;}
            else
                res+=100;
        }
        else if(a == 'V')
            res+=5;
        else if(a=='L')
            res+=50;
        else if(a=='D')
            res+=500;
        else
            res+=1000;
        i++;
    }
    return res;
};
