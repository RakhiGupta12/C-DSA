#include<iostream>
using namespace std;

// calculate sum of numbers from 1 to n

int calSum(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum = sum +i;
    }
    return sum;

}

// n factorial;
int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}
// pass by value
int sum(int a ,int b){
    a = 15;
    b = 6;
    return a+b;
}


int main(){
    int x = 4;
    int y = 7;
    
    cout<<"sum = "<<sum(x,y)<<endl;
    

    cout<<"sum of num is= "<<calSum(5)<<endl;
    cout<<"factorial = "<<factorial(5)<<endl;
    
}