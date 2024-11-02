#include<iostream>
using namespace std;

int main(){
    cout<<"Hii Rakhi"<<endl;
    cout<<"Hii moosy"<< "you"<<endl;
    cout<<"Mummy is \n tierd"<<endl;  //new line

    // Variable
    int age = 35;
    cout<<age<<endl;

    //Type casting
    //implict
    char grade = 'A';
    int value = grade;
    cout<<value<<endl;

    float dec = 3.45;
    double let = dec;
    cout<<let<<endl;

    double num = 45.678;
    int num1 = num;
    cout<<num1<<endl;

    // Explict
    float price = 100.9;
    int newprice =(int)price;
    cout<<newprice<<endl;

    // taking Input From user
    int agee;
    cout<<"ENTER YOUR AGE : ";
    cin>>agee;

    cout<<"YOUR AGE IS : "<<agee<<endl;

    // opertaors
    int a = 10, b = 5;

    cout<<"sum is "<<(a+b)<<endl;
    cout<<"differance "<<(a-b)<<endl;
    cout<<"multiply"<<(a*b)<<endl;
    cout<<"division is"<<(a/b)<<endl;
    cout<<"remender is "<<(a%b)<<endl;
    int c = 5;
    double d =10;
    cout<<(c/d)<<endl;

    // Relational
    cout<<(3>3)<<endl;
    cout<<(4==5)<<endl;
    cout<<(3!=6)<<endl;

    // Logical;
    cout<<!(3==3)<<endl;
    cout<<((2<4) || ( 5<6))<<endl;
    cout<<((2==4) && (3<4))<<endl;


   
    return 0;


}