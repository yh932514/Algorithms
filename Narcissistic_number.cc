/*************
//Print out all Narcissistic number within a range, m & n,（100 ≤ m ≤ n ≤ 999); 
//if no narcissistic number found then print no.
//Example: cin>>100>>120, cout<<"no".
//Example: cin>>300>>380, print 370 371
**************/
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>nn; //Narcissistic number
    for(int i = n; i<=m; i++){
        int a=i/100, b=(i-a*100)/10, c = i-a*100-b*10;
        int z = pow(a,3)+pow(b,3)+pow(c,3);
        if(z == i){
            nn.push_back(i);
            if(nn.size()==1)
                cout<<i;
            else
                cout<<" "<<i;
     }}
   if(nn.empty()){cout<<"no";}
    return 0;
}
