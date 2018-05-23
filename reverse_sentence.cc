/**********************
//Give you a sentence (containing only letters and spaces), reverse the position of the word in the sentence,
//each word is separated by a space, only one space between words and there is no space before and after the sentence. 
//For example: "hello xiao mi" -> "mi xiao hello"
//Code is fully working
***********************/
#include<iostream>
#include <vector>
#include<string>
using namespace std;
int main(){
    vector<string> st;
    string str;
    while(cin>>str){
        st.push_back(str);
    }
 
    long int size = st.size();
    if(size%2==0){
        for(long int i=size/2; i>=0; i--){
            for(long int j = i+1; j<size; j++){
            string temp = st[i]; 
            st[i] = st[j];
            st[j] = temp;
        }}
    }
    else{
        for(long int i=size/2; i>=0; i--){
            for(long int j = i+2; j<size; j++){
            string temp = st[i]; 
            st[i] = st[j];
            st[j] = temp;
        }}
    }
    for(long int i=0; i<size; i++){
        if(i!=size-1)
        cout<< st[i]<<' ';
        else
        cout<< st[i];
    }
    return 0;
}
