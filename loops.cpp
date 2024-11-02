#include<iostream>
using namespace std;

int main(){
    // LOOPS
    // print a number form 1 to 5
    int n = 1;
    while(n<=5){
        cout<<n<<endl;
        n++;
    }
    cout<<endl;
    
    int x;
    cout<<"enter the value of x to print"<<endl;
    cin>>x;
    
    int count = 1;
    while(count<=x){
        cout<<count<<","<<" ";
        count++;
    }
    cout<<endl;
    // print number from 5 to 1;
    int num = 5;
    while(num>=1){
        cout<<num<<" ";
        num--;
    }
    cout<<endl;


    
}