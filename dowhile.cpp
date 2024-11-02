#include<iostream>
using namespace std;

int main(){
    
    
    do{
        cout<<"hello"<<endl;
    }while(3>5);

    int n = 5;
    int i = 1;
    do{
        cout<<i<<" ";
        i++;
    }while(i<=n);
    cout<<endl;

    // sum of all oddnum using while loop

    int x = 10;
    int sumOdd = 0;
    int j= 1;
    while(j<=x){
        if(j%2 != 0){
            sumOdd = sumOdd+j;
            j++;
        }
    }
    cout<<sumOdd<<endl;
}