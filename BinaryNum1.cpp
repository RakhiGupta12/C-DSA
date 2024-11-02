#include<iostream>
using namespace std;

int decimalBinary(int n){
    int ans = 0;
    int pow = 1;

    while(n>0){
       int rem = n%2;
       n = n/2;
       ans = ans + (rem * pow);
       pow = pow*10;

    }
    return ans;

}

int main(){
    int n = 50;
    cout<<decimalBinary(n)<<endl;;
    for(int i=1; i<=10; i++){
        cout<<decimalBinary(i)<<" ";
    }

    return 0;
}