#include<iostream>
using namespace std;

int main(){
    // Find the charecter uppercase or lowercase
    char ch;
    cout<<"Enter your charecter"<<endl;
    cin>>ch;

    if(ch>='a'&& ch<='z' ){
        cout<<"charecter is lowercase";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"charecter is uppercase";
    }
    else{
        cout<<"number may be given";
    }

    //Or
    // if(ch>=97&& ch<=108 ){
    //    cout<<"charecter is lowercase";
    // }
    // else if(ch>=65 && ch<=90){
    //     cout<<"charecter is uppercase";
    // }
    // else{
    //     cout<<"number may be given";
    // }
    
    // TERNARY STATEMENT;
    int p = 45;
    cout<<(p>=0? "postive":"neg")<<endl;


    return 0;


}