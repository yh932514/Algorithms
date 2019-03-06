//The code works for number within [-32,767, 32767]
/******************************
//Given a 32-bit signed integer, reverse digits of an integer.

//Example 1:

//Input: 123
//Output: 321
//Example 2:

//Input: -123
//Output: -321
//Example 3:

//Input: 120
//Output: 21
********************************/

class Solution {
public:
    long int reverse(long int x) {
        long int re=0, unit; 
        if(x==0){
            return x; 
        }
        else if(x>0){
            unit=units(x);
            for(long int i=unit-1; i>=0; i--){
                int a=x%10; 
                re+=a*pow(10, i);
                x=(x-a)/10;
            }
        }
        else{
            x=0-x;
            unit=units(x);
            for(long int i=unit-1; i>=0; i--){
                int a=x%10; 
                re+=a*pow(10, i);
                x=(x-a)/10;
            }
            return (0-re);
        }
        return re;        
    }
    
    long int units(int x){
        long int count = 0, tmp=x;
        while(tmp>0){
            tmp = x-pow(10,count);
            count++;
        }
        return count-1;
    }
};
