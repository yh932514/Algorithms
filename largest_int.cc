/*
There are n positive integers, connecting them in a row to get a largest integer.
For example, when n=3, the three integers are 13,312,343, and the largest concatenated integer is 34331213.
For example, when n=4, 7,13,4,246, the largest concatenated integer is 7424613
The following code only works for under 18 digits.
*/
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
unsigned long long result(vector<unsigned long long>& rnum);
unsigned long long get_length(unsigned long long x);
unsigned long long compare(unsigned long long max, unsigned long long n);
void swap(vector<unsigned long long>& rnum, size_t& pa, size_t& pb);
    
int main(){
    int size, b=0;
    cin>>size;
    vector<unsigned long long> rnum;
    while(b<size){
        string a;
        cin>>a;
        rnum.push_back(stoi(a));
        b++; }
    unsigned long long max = result(rnum);
    for(size_t i=0; i<rnum.size(); i++){
        for(size_t j=0; j<rnum.size(); j++){
            if(i!=j){swap(rnum, i, j);}
            max = compare(max, result(rnum));
    }}
    cout<<max;
    return 0;
}
   
unsigned long long compare(unsigned long long max, unsigned long long n){
    if(max<=n)
        return n;
    else
        return max;
}
      
void swap(vector<unsigned long long>& rnum, size_t& pa, size_t& pb){
    unsigned long long t = rnum[pa];
    rnum[pa] = rnum[pb];
    rnum[pb] = t;
}
   
unsigned long long result(vector<unsigned long long>& rnum){
    unsigned long long re=0;
    for(size_t i=0; i<rnum.size(); i++){
        unsigned long long w=0;
        for(size_t j=i+1; j<rnum.size(); j++){
            w+=get_length(rnum[j]);
          }
            re = re+rnum[i]*pow(10, w);
            w=0;}
    return re;
}
unsigned long long get_length(unsigned long long x){
    unsigned long long leng=0;
    while(x){
        x/=10;
        leng++;}
    return leng; }
