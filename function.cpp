#include<iostream>
using namespace std;


 // function
int printHello(){
        cout<<"hello"<<endl;
        return 3;
     }
int sum(int a, int b){
    int s = a+b;
    return s;
}

int main(){
    
    
     int val = printHello();
     cout<<"val= "<<val<<endl;
     // function always need to call: function call, function invoke
     printHello();
     printHello();
     cout<<printHello()<<endl;

    
    cout<<"sum = "<<sum(2,4);


}