#include<iostream>
using namespace std;

int main(){
    // for loop

    int n = 10;
    for(int i = 1; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;

    // sum of number from 1 to n;
    int x;
    cout<<"enter the value of x"<<endl;
    cin>>x;
    int sum = 0;
    for(int i = 1; i<=x; i++){
        sum = sum +i;
        
       
    }
    cout<<sum<<endl;

    // sum of all odd number from 1 to n
    int p;
    cout<<"Enter the value of p"<<endl;
    cin>>p;

    int oddSum = 0;
    for(int i = 1; i<=p; i++){
       
        if(i%2!=0){
            oddSum = oddSum +i;
        }
    }
    cout<<oddSum<<endl;

    // Sum of all even number
    int q = 5;
    int evenSum = 0;
    for(int i = 1; i<=q; i++){
        if(i%2==0)
        evenSum = evenSum + i;
    }
    cout<<"sum of Even number is = "<<evenSum<<endl;

    int xy = 10;
    int sumOdd = 0;
    int j= 1;
    while(j<=xy){
        if(j%2 != 0){
            sumOdd = sumOdd+j;
            j++;
        }
    }
    cout<<sumOdd<<endl;
    

    
}