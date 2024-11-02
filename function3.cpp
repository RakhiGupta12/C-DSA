#include<iostream>
using namespace std;

int changeX(int x){
    x = 2*x;  
    cout<<"x = "<<x<<endl;

}


// calcualte sum of digit if a number
int sumDigit(int num){
    int digsum = 0;
    while(num>0){
       int  lastdig = num%10;
       num = num/10;
       digsum = digsum+lastdig;
    }
    return digsum;
    
}

int main(){
    int x = 5;
    changeX(x);

    cout<<"x = "<<x<<endl;

    // sum of digit
    cout<<"sum = "<<sumDigit(127)<<endl;

}