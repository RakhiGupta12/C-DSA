#include<iostream>
using namespace std;

int main(){
    // n is prime or not
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    int i = 2;
    while(i<=n-1){
       if(n%i==0){
        cout<<"Given number is non- prime"<<endl;
        break;
       }
       else{
        cout<<"given number is prime"<<endl;
        break;
       }
       i++;
    }
    cout<<endl;

    //or
    int p = 13; 
    bool isPrime = true;
    for(int i =2; i<=p-1; i++){
        if(p%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime==true){
        cout<<"prime"<<endl;
    }else{
        cout<<"not prime"<<endl;
    }
}