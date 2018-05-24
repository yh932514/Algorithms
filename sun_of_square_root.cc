/******************
//The first number of the series is n, and the following items are the square root of the previous item.
//Get the sum of the first m numbers of the series.
//cin >> n >> m; 
//Example: input:81 4
//         output:94.73
******************/
#include<iostream>
#include<vector>
#include<cmath>
#include <iomanip> //for the 2 digit after decimal point
using namespace std;
int main(){
    int n, m;
    
    cin>>n>>m; 
    double f = (double)n;
    double result = f;
    for(int i=0; i<m-1; i++){
        double temp = pow(f,0.5);
        f=temp;
        result += temp; 
    }
    cout<<fixed<<setprecision(2)<<result<<endl;
    return 0;
}
