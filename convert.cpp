//bug in loops. 
/******************************
//The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

//P   A   H   N
//A P L S I I G
//Y   I   R
//And then read line by line: "PAHNAPLSIIGYIR"

//Write the code that will take a string and make this conversion given a number of rows:

//string convert(string s, int numRows);
//Example 1:

//Input: s = "PAYPALISHIRING", numRows = 3
//Output: "PAHNAPLSIIGYIR"
//Example 2:

//Input: s = "PAYPALISHIRING", numRows = 4
//Output: "PINALSIGYAHRPI"
//Explanation:

//P     I    N
//A   L S  I G
//Y A   H R
//P     I
******************************/

class Solution {
public:
    string convert(string s, int numRows) {
        s.erase (s.end()-1); 
        int size=s.length(), m = numRows-1, i=0, count=0, crow=-1;
        cout<<size<<" "<<m<<endl;
        cout<<s<<endl;
        string re; 
        while(i<=size && crow<numRows ){
            int j=0, a=0;
            if(j==0)
                crow++;
            cout<<"crow:"<<crow<<" (i+a*m): "<<(i+a*m)<<" m:"<<m<<" re[13]:"<<re[13]<<" m:"<<m<<" re: "<<re<<endl;
            //i+a*m=
            while(((i+a*m)<=size && j<size) && crow<numRows){
                    //cout<<" i+a*m:"<<i+a*m<<" "<<" j:"<<j<<endl;
                    if(crow==0){
                         re.insert (re.end(),s[i+a*m]);
                      //  cout<<"初行     crow:"<<crow<<" i+a*m:"<<i+a*m<<" i+j:"<<i+j<<" le:"<<re<<endl;
                        count=j;
                        a+=2;
                        j++;
                    }
                    else if(crow==m){  
                        //cout<<"crow:"<<crow<<endl;
                        while(re.length() <=size){
                            re.insert (re.end(),s[crow*(a+1)]);
                            a+=2;
                            j++;
                        cout<<" 尾行 crow:"<<crow<<re.length()<<endl; 
                        }
                        return re;
                    }
                    else{
                  //      cout<<"     crow:"<<crow<<endl;
                        int count0=0;
                        while(count0<=(2*(count+1)-1)){//2*(count+1)-1 = 5    
                            if(j==0 || count0%2==1)
                                {
                                if(j==0){
                                    re.insert(re.end(),s[crow]); 
                                    j=crow;
                                    re.insert(re.end(),s[j+2+2*(m-crow-1)]);//下
                                    j=j+2+2*(m-crow-1);
                                    count0+=2;}
                                else{
                                    j=j+2+2*(m-crow-1);
                                    re.insert(re.end(),s[j]);
                                    count0++;
                                }
                             //   cout<<"第一j："<<j<<" m-1 "<<m-1<<" re:"<<re<<endl;
                                }
                            else{
                                j=j+2+2*(crow-1);//上
                             //   cout<<"呀"<<s[j]<<j<<endl;
                                re.insert(re.end(),s[j]); 
                                count0+=1;
                            }
                        //    cout<<" j:"<<j<<" a:"<<a<<" s位置:"<<re<<endl;
                            a+=2; 
                        }
                    }
                }
            i=re.length();
        }
        return re;
    }
};
