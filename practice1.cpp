#include<iostream>
using namespace std;

int main(){
    // sum of two num
    int a, b;
    cout<<"enter your first num"<<endl;
    cin>>a;
    cout<<"enter your sec num"<<endl;
    cin>>b;
    cout<<"sum of two number is :"<<(a+b)<<endl;

    //Uniary operator
    int x= 10;
    int y= x++; // kaam , update
    cout<<y<<endl;  // 10
    cout<<x<<endl; // 11

    int p = 12;
    int q= ++p;
    cout<<q<<endl;
    cout<<p<<endl;



    return 0;
}