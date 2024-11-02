#include<iostream>
using namespace std;

// waf to check if a number is prime or not
int isPrime(int n){
     
     for(int i = 2; i<=(n-1); i++){
        if(n%i==0){
            cout<<"not prime"<<endl;
            break;
           
        }else{
           cout<<"prime"<<endl;
           break;
        }
     }
    
}

// write a function to print all prime number from 1 to n;
// dought
int printPrime(int x){
     for(int i=2; i<=(x-1); i++){
        if(x%i==0){
            cout<<i <<" not prime number"<<endl;
            break;
        }else{
            cout<<<<" prime number"<<endl;
            break;
        }
     }
}

int main(){
    int n = 13;
    isPrime(n);

    int x = 13;
    printPrime(x);

}