#include<iostream>
using namespace std;

int binaryDecimal(int binNum){
    int ans = 0;
    int pow = 1;

    while(binNum > 0){
        int rem = rem%10;
        ans = ans +(rem*pow);
        binNum = binNum/10;
        pow = pow*2;
    }
    return ans;
}

int main(){
    
    cout<<"Binary number is : "<<binaryDecimal(1010)<<endl;
    return 0;
}